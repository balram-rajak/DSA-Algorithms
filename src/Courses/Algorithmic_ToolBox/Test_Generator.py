import sys, random
high = int(sys.argv[1])
myseed = random.seed(sys.argv[2]) #sets the state of random, 
# such that the generated values are reproducible

def random_number(low, high):
    return random.randint(low, high)

def generate_random_array(size, high):
    array = []
    for i in range(size):
        array.append(int(random.random() * high ))
    return array

size = random_number(2, high)
print(size)

# arr= ' '.join([str(i*2) for i in range(n)])

print(" ".join(map(str, generate_random_array(size, high))))