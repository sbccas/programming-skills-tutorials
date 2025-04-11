#Write a python program to find sum and average of numbers in a List
#IMPLEMENT DYNAMIC LIST CONCEPT
list1= ["111","222",333,444]

def sumnavg():
    global sum1, avg
    sum1= 0
    for i in list1:
        sum1 = sum1+ int(i)
    return sum1
x = sumnavg()
y = x/len(list1)
print("SUM and AVERAGE OF LIST IS : ",x,y)
