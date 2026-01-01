base_cases = {8:[3,5] , 9:[3,3,3], 10:[5,5]}

def change_Recursive(n):
    assert n>=8
    if(n<=10):
        return base_cases[n]
    return change_Recursive(n-3) + [3]

def change_Iterative(n):
    assert n>=8
    coins=[];
    while(n % 5 !=0):

        coins.append(3)
        n -=3;

    while(n!=0):
        coins.append(5)
        n -= 5;
    
    return coins

print(change_Iterative(32))
