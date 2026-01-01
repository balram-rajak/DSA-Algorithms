import itertools as it
import random

"""
finalSolutions= []

random.seed(1)

def nextpos(n,tempTuple=[]):
    size = len(n)
    x = random(range(0,size))
    y = random(range(size))

    for i,j in tempTuple:
        if(x != i and y !=j and abs(i-x) != abs(j-y)):
            tempTuple.append((x,y))
        
    if(len(tempTuple) == n):
        return tempTuple;
    else:
        nextpos(n,tempTuple)

    return

finalSolutions.pop()
def main(n):
    for x in range(n):
        solution = nextpos(n,[(x,3)])

"""

def can_be_extended(perm):
    l = len(perm)-1;

    for j in range(l):
        if(l-j == abs(perm[l]-perm[j])):
            return False;
    return True;

def generate_permutations (perm, n):
    if len (perm) == n:
        print (perm)
        return

    for k in range(n):
        if k not in perm:
            perm.append(k)
            if can_be_extended(perm):
                generate_permutations (perm, n)
            perm. pop ()

generate_permutations (perm = [], n = 4)