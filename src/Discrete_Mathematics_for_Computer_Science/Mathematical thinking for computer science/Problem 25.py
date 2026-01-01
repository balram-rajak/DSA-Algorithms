# Prove that there exists a positive integer divisible by 57 that uses only digits 0 and 1

n=111

while(True):
    if(n % 57 == 0):
        print(n)
        break
    n = n * 10 +1