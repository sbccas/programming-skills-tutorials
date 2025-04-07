#Write a python program to find length of list using UDF without using len function

#IMPLEMENT DYNAMIC LIST CONCEPT
list1= ['111','222','333','444']
#check1 element i=i+1

def lsize():
    global add, average
    add= 0
    average= 0
    for i in list1:
        print(i)
        add+= int(i)
    average=add/len(list1)
    return add,average

x,y = lsize()
print("SUM and AVERAGE OF LIST : ",x,y)
