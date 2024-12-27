strrem = """SAMPLE PROGRAM FOR TUPLE DEMO
sutex = ("MONDAY", "TUESDAY", "WEDNESDAY","THURSDAY", "FRIDAY","SATURDAY", "SUNDAY")
"""
print(strrem)
sutex = ("MONDAY", "TUESDAY", "WEDNESDAY","THURSDAY", "FRIDAY","SATURDAY", "SUNDAY")
print(sutex)
print(sutex[0])
print(sutex[1])
print(sutex[2])
print(sutex[3])
print(sutex[4])
print(sutex[5])
print(sutex[6])
print("USE OF FOR LOOP TO PRINT ALL ITEMS OF TUPLE")
print("___________________________________________")
print("LENGTH OF TUPLE IS : " ,len(sutex))
for i in range(0,len(sutex)):
 print(sutex[i])
print("------------------------")
print("USE OF NEGATIVE INDEXING")
print("------------------------")
print(sutex)
print(sutex[-1])
print(sutex[-2])
print(sutex[-3])
print(sutex[-4])
print(sutex[-5])
print(sutex[-6])
print(sutex[-7])
print("-----------------------------------")
print("USE OF NEGATIVE INDEXING + FOR LOOP")
print("-----------------------------------")
for i in range(len(sutex)-1,-1,-1):
 print(sutex[i])
print("-------------------------")
print("STUDENT VERSION reverse tupel usinf for loop")
print("-------------------------")
for i  in range(-1,-len(sutex)-1,-1):
    print(sutex[i])
print("""print(sutex[2:5])""")
print(sutex[2:5])
print("""print(sutex[:4])""")
print(sutex[:4])
print("""print(sutex[2:])""")
print(sutex[2:])
print("""print(sutex[-4:-1]""")
print(sutex[-4:-1])
print("""if "apple" in sutex:
  print("Yes, 'apple' is in sutex tuple")""")
if "SUNDAY" in sutex:
  print("Yes, 'SUNDAY' is in sutex tuple")
else:
  print("No, 'apple' not in sutex tuple")
print("Change Tuple Values")
print("CHANGE TUPLE TO LIST --> ADD --> LIST TO TUPLE")
slist = list(sutex)
slist[1]="JANUARY"
sutex = tuple(slist)
print(sutex)
print("ADD ITEMS TO TUPLE")
slist = list(sutex)
slist.append("FEBRUARY")
sutex =tuple(slist)
print(sutex)
print("ADD TUPLE TO A TUPLE")
bca= ("SUMMER",)
sutex = sutex + bca
print(sutex)
print("Remove Items")
slist= list(sutex)
slist.remove("JANUARY")
slist.remove("FEBRUARY")
slist.remove("SUMMER")
sutex = tuple(slist)
print(sutex)
print("ADD TUESDAY IN TUPLE")
slist = list(sutex)
slist.insert(1,"TUESDAY")
sutex = tuple(slist)
print(sutex)
'''print("DELETE TUPLE")
'del sutex
print(sutex) #ERROR RAISE THASE'''
print("UNPACKING OF TUPLE")
print(sutex)
(d1,d2,d3,d4,d5,d6,d7) = sutex

print(d1)
print(d2)
print(d3)
print(d4)







































  

























































