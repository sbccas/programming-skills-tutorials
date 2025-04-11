#Write a python program to count and print only unique values from the list

#IMPLEMENT DYNAMIC LIST CONCEPT
list1= [111,22,33,111,444]
ulist = []

for i in list1:
    if i not in ulist:
        ulist.append(i)
print(ulist)
print(len(ulist))


    
