#Write a python program to count occurrences of an element in a List.

#IMPLEMENT DYNAMIC LIST CONCEPT
list1= [111,"SUTEX","BCA","AMROLI","BCA","BBA","BCOM"]
find = input("ENTER ELEMENT TO FIND:")
count= 0
for i in list1:
    if (find == i):
        count+=1
print("TOTAL ITEM :",count)
        
