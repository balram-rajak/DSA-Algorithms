# https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

from collections import defaultdict;

# Frequency calculator
def frequencyCount(arr):
    
    dict = defaultdict(lambda: 0);
    freq = [0] * len(arr);

    for x in arr:
        dict[x] = dict[x] + 1;
    
    for x,y in dict.items():
        freq[x-1] = y
    
    return freq;


# Main code
testCases = int(input(""));
assert(testCases > 0);

while(testCases >0):

    size = int(input(""));
    arr = [];

    arr = input("").split();
    
    for x in range(size):
        arr[x] = int(arr[x]);
    
    freq = frequencyCount(arr);

    for x in arr:
        print(f"{x} : {freq[x-1]}");

    testCases -= 1;


# print(frequencyCount({2,3,2,3,5}));
    