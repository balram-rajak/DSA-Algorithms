import itertools as it;

def print2DArray(perm):
    return

def can_be_extended(perm):

    x = len(perm)-1
    y= len(perm[x])-1

    for i in range(x):
        for j in range(y):
            if(abs(x -i) == 1):
                perm[x][y] != perm[x-i][y]
            if(abs(y-j) == 1):
                perm[x][y] != perm[x][y-j]
            

    return

def innerRecursion(perm,n,i):
    temp=[]
    pos = []
    if len(temp) == n:
        return perm[i];

    for j in range(n):
        if j not in pos:
            pos.append(j);
            for k in range(0,1):
                perm[i].append(k);
                if can_be_extended(perm,n):
                    innerRecursion(perm,n,i);
                perm[i].pop()

def outerRecursion(perm,n):

    if len(perm) == n:
        print2DArray(perm);
        return

    for i in range(n):
        if i not in perm:
            innerRecursion(perm,n,i)
            # if(len(temp) == n):
            #     perm[i].append(temp)
            outerRecursion(perm,n)
            perm.pop()

def main(n):
    perm = [n][n];
    return