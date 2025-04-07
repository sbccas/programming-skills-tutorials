#Write a python program to find length of list using UDF without using len function

#IMPLEMENT DYNAMIC LIST CONCEPT
list1= [111,222,333,444]
#check1 element i=i+1

def lsize():
    global counter
    counter =0
    for i in list1:
        print(i)
        counter+=1
    return counter

x = lsize()
print("LENGTH OF LIST IS : ",x)
