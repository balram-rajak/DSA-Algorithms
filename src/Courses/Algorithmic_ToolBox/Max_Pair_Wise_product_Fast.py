
n = int(input())

arr = [int(x) for x in input().split()]

def max_pairwise_product_Fast(array):
    n = len(array)

    assert n >= 2, "Array should have at least two elements"
    max_product = -1
    for i in range(n):
        if(max_product == -1 or array[max_product] < array[i]):
            max_product = i

    assert max_product != -1, "There should be at least one maximum product index"

    max_product_2=-1
    for j in range(n):
        if((j != max_product and max_product_2 < array[j])):
           max_product_2= array[j]

    assert max_product_2 !=-1, "There should be at least one second maximum product index"
    return array[max_product] * max_product_2

print( max_pairwise_product_Fast(arr))
