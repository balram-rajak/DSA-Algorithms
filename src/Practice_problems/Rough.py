def p_17(x):
    count = 65
    for i in range(x):
        print(" "* (x-(i+1)),end="")
        for j in range(65,65+i+1):
            print(chr(j),end="")
        # for x in range(65+i-1,65+1):
        #     print(chr(x),end="")
        # print(" "*(x-(i+1)),end="")
        print()

p_17(4)