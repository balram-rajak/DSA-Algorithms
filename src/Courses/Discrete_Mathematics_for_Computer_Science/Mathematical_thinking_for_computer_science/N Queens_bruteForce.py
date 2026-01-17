import itertools as it

def is_solution(perm):
    # for i1,i2 in it.combinations(range(len(perm)),2):
    #     if(abs(i1-i2) == abs(perm[i1] - perm[i2])):
    #         return False;
    # return True
    return all(abs(i1-i2) != abs(perm[i1]-perm[i2]) for i1,i2 in it.combinations(range(len(perm)),2))

def generate_permutations(n):
    return it.permutations(range(n))

def main():
    # for permutation in generate_permutations():
    #     print(f"permutation: {permutation} | solution: {is_solution(permutation)}")
    Visualisation_data(next(filter(is_solution,generate_permutations(8))));

def Visualisation_data(solution):
    queen_positions=[]
    for col, row in enumerate(solution):
        queen_positions.append((col,row))
    print(f"Visualization_data: {queen_positions}")

main();
assert is_solution([1,3,0,2])==True;
assert is_solution([0,1,2,3])==False;