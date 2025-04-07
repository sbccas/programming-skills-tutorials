#Write a python program to swap any two elements in a list using UDF
#PROG START HERE
list1 = []
x = int(input("PLEASE ENTER YOUR LIST SIZE:"))
for i in range(x):
    list1.append(int(input("ENTER")))
print(list1)

#position no1 , no2
er1 = len(list1)
print("ENTER DATA IN BETWEEN : 0 and " ,er1 )
no1=int(input("ENTER POSITION NO1"))
no2=int( input("ENTER POSITION NO2"))
#UDF FOR SWAPPING
def myswap(n1,n2):
    # SWAP ELEMENTS ON FIRST AND LAST POSITION
    x=list1[n1]
    list1[n1] = list1[n2]
    list1[n2] = x
    
print("PROGRAM USING UDF:")
myswap(no1,no2)
print(list1)















  



