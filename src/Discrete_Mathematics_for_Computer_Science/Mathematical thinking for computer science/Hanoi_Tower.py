
def hanoi(n, from_rod, to_rod):
    if n==1:
        print(f"Move disk from {from_rod} to {to_rod}")
        return
    
    unused_rod = 6 - from_rod - to_rod
    hanoi(n-1, from_rod, unused_rod)
    print(f"Move disk from {from_rod} to {to_rod}")
    hanoi(n-1, unused_rod, to_rod)


hanoi(3,1,2)