

"""i = 0
while i < len(sutex):
    print(sutex[i])
    i+=1


print("TOTAL ITEMS USING COUNT SUNDAY:  ",sutex.count("SUNDAY1"))
print("INDEX OF SUNDAY :  ",sutex.index("SUNDAY"))
"""
"""TUPLE USER --->> NAME ---->>> YES  ----->> COUNT   ---->>> NUMBER (INDEX)"""

sutex=("MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY")

sname = input("PLEASE ENTER SEACHING DATA")

if sname in sutex:
    print(sname,  " IS TOTAL : ",sutex.count(sname))
    print(sname, " IS LOCATED AT : ", sutex.index(sname))
else:
    print("ITEM NOT FOUND : ", sname)

