from time import time
start = time()

n = int(input())

arr = [int(x) for x in input().split()]

def max_pairwise_product(array):

    n = len(array)
    max_product = -1

    for i in range(n-1):
        for j in range(i+1, n):
            result = array[i] * array[j]
            if( result > max_product):
                max_product = result
    return max_product

# def stress_test():
#     while(True):
#         size = random_number(2,100)
#         array = generate_random_array(size, 100)

#         result1 = max_pairwise_product(array)
#         result2= max_pairwise_product_Fast(array)

#         if(result1 == result2):
#             print("OK")
#         else:
#             print("Wrong Answer:",result1, result2)
#             print("Test case ", array)
#             break;
#     return

# stress_test()
# if(arr):
print(max_pairwise_product(arr))
# else:
#     print(0)

# end = time()
# print("Time: ", end - start)