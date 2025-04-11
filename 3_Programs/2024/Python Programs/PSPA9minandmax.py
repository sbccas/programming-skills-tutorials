#Write a python program to find smallest and largest number in a List. 
#IMPLEMENT DYNAMIC LIST CONCEPT
list1= [111,22,33,444]

print(min(list1))
print(max(list1))
#without using builtin functions
small = large = list1[0]
for i in list1:
    if (i < small):
        small= i
    elif (i>large):
        large = i
print("SMALLEST =",small)
print("LARGEST =",large)



    
