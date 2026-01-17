
from math import floor

# Find the position of element
def findWithPos(a,n,start,end):
    midpoint = start + floor((end-start)/2)
    # if start == end == n:
    #     return start
    if a[midpoint] == n:
        return midpoint
    
    if a[midpoint]<n:
        return findWithPos(a,n,midpoint+1,end)
    else:
        return findWithPos(a,n,start,midpoint)

# Checks whether element present or not
def find(a,n):
    assert(len(a)) >0
    midpoint = floor(len(a)/2)
    if a[midpoint] == n:
        return "Found!"
    
    if a[midpoint]<n:
        return find(a[midpoint+1:],n)
    else:
        return find(a[:midpoint],n)
    

a = [1,2,3,4,5,6,7,8,9]
print(find([1, 2, 3, 3, 5, 6, 6, 8, 9, 9, 9], 8))