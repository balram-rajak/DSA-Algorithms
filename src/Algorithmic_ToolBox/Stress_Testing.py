import subprocess
import sys

tests = int(sys.argv[1])
high = int(sys.argv[2])

GEN = r"D:\vault\CodeLab\DSA-Algorithms\src\Algorithmic_ToolBox\Test_Generator.py"
SLOW = r"D:\vault\CodeLab\DSA-Algorithms\src\Algorithmic_ToolBox\Max_Pair_Wise_product.py"
FAST = r"D:\vault\CodeLab\DSA-Algorithms\src\Algorithmic_ToolBox\Max_Pair_Wise_product_Fast.py"

for i in range(tests):
    print("Test #", i)

    # 1) Generate input as a string (via subprocess, no file)
    gen_proc = subprocess.run(
        ["python", GEN, str(high), str(i)],
        capture_output=True,
        text=True,
        check=True
    )
    test_input = gen_proc.stdout

    # 2) Run slow solution with that input
    slow_proc = subprocess.run(
        ["python", "-O", SLOW],
        input=test_input,
        capture_output=True,
        text=True,
        # check=True # Fails instantaneously if fails
    )
    model = slow_proc.stdout.strip()

    if slow_proc.returncode != 0:
        print(f"Generator failed: {slow_proc.stderr}") #Returns the error cause
        break

    # 3) Run fast solution with the same input
    fast_proc = subprocess.run(
        ["python", "-O",FAST],
        input=test_input,
        capture_output=True,
        text=True,
        # check=True # Fails instantaneously if fails
    )
    fast = fast_proc.stdout.strip()

    if fast_proc.returncode != 0:
        print(f"Generator failed: {fast_proc.stderr}") #Returns the error cause
        break

    print("Model:", model)
    print("Fast: ", fast)

    if model != fast:
        print(f"\n❌ Mismatch found on test #{i}")
        print(f"Input was:{test_input}")
        break

    print()