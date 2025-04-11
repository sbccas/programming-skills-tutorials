#Write a python program to reverse all strings in string List. 

#IMPLEMENT DYNAMIC LIST CONCEPT
list1= ["SUTEX", "AMROLI","BCA","BBA","BCOM"]
rev1 = []
for i in reversed(list1):
    rev1.append(i[::-1])

print(rev1)    
