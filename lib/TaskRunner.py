import os
import sys
import argparse

def inject_timing_logic(file_path):
    # Read the original source code
    with open(file_path, "r") as file:
        lines = file.readlines()

    # Prepare the timing logic to inject
    timing_start = [
        "#include <chrono> // For timing\n",
        "auto start = std::chrono::high_resolution_clock::now(); // Start the timer\n"
    ]
    timing_end = [
        "auto end = std::chrono::high_resolution_clock::now(); // Stop the timer\n",
        "std::chrono::duration<double, std::milli> duration = end - start;\n",
        "fprintf(stderr, \"Execution time: %.3f ms\\n\", duration.count()); // Print to stderr\n"
    ]

    # Inject timing logic into the main() function
    modified_lines = []
    inside_main = False
    for line in lines:
        stripped_line = line.strip()

        # Detect the start of the main() function
        if stripped_line.startswith("int main"):
            inside_main = True
            modified_lines.append(line)  # Add the original line
            modified_lines.extend(timing_start)  # Inject timing start logic
            continue

        # Detect the end of the main() function
        if inside_main and stripped_line == "return 0;":
            modified_lines.extend(timing_end)  # Inject timing end logic

        modified_lines.append(line)

    # Write the modified code back to the file
    with open(file_path, "w") as file:
        file.writelines(modified_lines)

    print(f"Timing logic injected into {file_path}")


def compile_and_run(file_path, output_dir, input_file, output_file):
    # Compile the modified source file
    file_name, file_extension = os.path.splitext(os.path.basename(file_path))
    if file_extension == ".cpp":
        executable_path = os.path.join(output_dir, f"{file_name}")
        compile_command = f"g++ -std=c++14 -O2 \"{file_path}\" -o \"{executable_path}\""
        print(f"Compiling: {compile_command}")
        if os.system(compile_command) != 0:
            print("Compilation failed.")
            sys.exit(1)
        print("Compilation successful.")

        # Run the executable with input and output redirection
        run_command = f"\"{executable_path}\" < \"{input_file}\" > \"{output_file}\""
        print(f"Running: {run_command}")
        if os.system(run_command) != 0:
            print("Execution failed.")
            sys.exit(1)
    else:
        print(f"Unsupported file type: {file_extension}")
        sys.exit(1)


# Main function to parse arguments and execute the workflow
if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Inject timing logic, compile, and run a C++ program.")
    parser.add_argument("file_path", help="Path to the source file (C++).")
    parser.add_argument("output_dir", help="Directory to store the compiled executable.")
    parser.add_argument("input_file", help="Path to the input file.")
    parser.add_argument("output_file", help="Path to the output file.")
    args = parser.parse_args()

    # Validate file paths
    if not os.path.exists(args.file_path):
        print(f"Error: Source file {args.file_path} does not exist.")
        sys.exit(1)
    if not os.path.exists(args.input_file):
        print(f"Error: Input file {args.input_file} does not exist.")
        sys.exit(1)
    if not os.path.exists(args.output_dir):
        os.makedirs(args.output_dir)

    # Inject timing logic, compile, and run
    inject_timing_logic(args.file_path)
    compile_and_run(args.file_path, args.output_dir, args.input_file, args.output_file)