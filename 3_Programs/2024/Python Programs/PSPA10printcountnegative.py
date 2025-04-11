#Write a python program to count and print negative numbers in a List. 
#IMPLEMENT DYNAMIC LIST CONCEPT
list1= ["-111",-22,33,-444]

negative1 = []
count = 0
for i in list1:
    if (int(i) < 0):
        negative1.append(i)
        count +=1
print(negative1)
print("TOTAL NEGATIVES:",count)
    


    
