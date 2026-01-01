import sys

def change(amount):
  coins = []
  while( amount % 5 != 0):
    amount -= 7;
    coins.append(7);
  
  while( amount>0):
    coins.append(5);
    amount -= 5;
  # print(coins)
  return coins;


def coins_Iterative(n):
    assert(n >=7)
    amount = 0

    while(len(str(n)) <=6 and sys.getsizeof(n) ==28 ):
        # print(n)
        if remainder(n)!=0:
            amount = n;
            # print(amount)
        n += 1
             
    return amount

# print(coins_Iterative(5000))

print(change(13))