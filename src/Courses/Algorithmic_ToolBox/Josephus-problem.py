# Simulate the elimination process
def naive_josephus(n, k):

    return (n ^ (1 << n.bit_length() - 1)) << 1
    # alive = list(range(n))
    # pos = 0
    # while len(alive) > 1:
    #     pos = (pos + k - 1) % len(alive)
    #     alive.pop(pos)
    #     pos %= len(alive)
    # return alive[0]

print(naive_josephus(13,2));
# print(naive_josephus(14,2));

# when k=2
def josephus2(n):
    p = 1
    while p <= n: p *= 2
    return 2*n - p + 1

print(josephus2(12));