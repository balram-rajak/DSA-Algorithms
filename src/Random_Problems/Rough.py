import math

def segmented_sieve(L, R):
    if L < 2: L = 2
    
    # 1. Generate primes up to sqrt(R)
    limit = int(math.sqrt(R)) + 1
    primes = []
    is_prime_small = [True] * (limit + 1)
    for p in range(2, limit + 1):
        if is_prime_small[p]:
            primes.append(p)
            for i in range(p * p, limit + 1, p):
                is_prime_small[i] = False
                
    # 2. Sieve the segment [L, R]
    is_prime_segment = [True] * (R - L + 1)
    for p in primes:
        # Find first multiple of p in range [L, R]
        start = max(p * p, (L + p - 1) // p * p)
        for j in range(start, R + 1, p):
            is_prime_segment[j - L] = False
            
    # 3. Collect primes
    result = []
    for i in range(len(is_prime_segment)):
        if is_prime_segment[i]:
            result.append(i + L)
    return result

print(segmented_sieve(1, 10)) # Output: [11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
