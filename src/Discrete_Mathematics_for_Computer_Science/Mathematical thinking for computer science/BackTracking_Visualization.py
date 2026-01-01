# Program to generate text based visualization for backtracking in N-queens problem.


def generate_permutations(perm, n, depth=0, trace=[]):
    """Generate permutations with detailed tracing"""
    indent = "  " * depth
    
    # Trace: entering this call
    print(f"{indent}→ Call depth {depth}: perm={perm}")
    
    if len(perm) == n:
        print(f"{indent}✓ PRINT: {perm}")  # Base case - print found permutation
        return
    
    for k in range(n):
        if k not in perm:
            print(f"{indent}  ├─ Try k={k}: append to get {perm + [k]}")
            perm.append(k)
            generate_permutations(perm, n, depth + 1, trace)
            popped = perm.pop()
            print(f"{indent}  └─ Backtrack: pop({popped}) → perm={perm}")
    
    print(f"{indent}← Return from depth {depth}")

# Run with n=4
print("=== PERMUTATION GENERATION TRACE (n=4) ===\n")
generate_permutations([], 4)
