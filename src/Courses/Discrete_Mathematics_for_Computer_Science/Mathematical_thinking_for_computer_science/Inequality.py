
n = 0

while(True):
    if( (2 ** n + 3 ** n) <= (10 ** 1000) and (2 ** (n+1) + 3 ** (n+1)) > (10 ** 1000) ):
        print(n)
        # print(2 ** (n+1) + 3 ** (n+1))
        break
    n +=1