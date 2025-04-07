#Write a python program to interchange first and last elements in a list using UDF.
def myswap():
    #list1 = [111,222,333,444,555,666]
    list1 = []
    x = int(input("PLEASE ENTER YOUR LIST SIZE:"))
    for i in range(x):
        list1.append(int(input("ENTER")))
    print(list1)
    # SWAP ELEMENTS ON FIRST AND LAST POSITION
    x=list1[0]
    list1[0] = list1[-1]
    list1[-1] = x
    print(list1)

#PROG START HERE
print("PROGRAM USING UDF:")
myswap()











  



