# WAP TO SHOW DEMO OF LIST METHODS

a = ["AMROLI","SUTEX","BCA","BBA","BCOM","BSC DSA","BSC IT","MSC IT"]
print("LIST a")
print(a)
# APPEND
a.append("MCA")
print("LIST a after APPEND")
print(a)
# CLEAR
#a.clear()
# print("LIST a after CLEAR")
#print(a)
# COPY
b = a.copy()
print("LIST b after copying a ")
print(b)
# COUNT
print("TOTAL 'BCA' IN LIST a") 
print(a.count("BCA"))
# INDEX
print("BCA IS AT INDEX NO :")
print(a.index("BCA"))
# INSERT
a.insert(3,"MBA")
print("INSERTING 'MBA' at INDEX 3 in LIST")
print(a)
# POP
a.pop(3)
print("POP on 'MBA'")
print(a)
# REMOVE
a.remove('BBA')
print("REMOVE ON BBA")
print(a)
# REVERSE
a.reverse()
print("REVERSE ON a")
print(a)
# SORT
print("SORT ON a")
print(a)
a.sort()
print(a)

























