# Changing tuple values
amrolibca = (4, 2, 3, [6, 5,4,3])
print("""print(amrolibca)""")
print(amrolibca)
print("""print(amrolibca[3])""")
print(amrolibca[3])
print("""print(amrolibca[3][0])""")
print(amrolibca[3][0])
print("""print(amrolibca[3][1])""")
print(amrolibca[3][1])
print("""print(amrolibca[3][2])""")
print(amrolibca[3][2])
print("""print(amrolibca[3][3])""")
print(amrolibca[3][3])
#print("""print(amrolibca[4])""")
#print(amrolibca[4])  # IndexError: tuple index out of range
print("""amrolibca[3]=111""")
#amrolibca[3]=111
#TypeError: 'tuple' object does not support item assignment
amrolibca[3][0]=111
print(amrolibca)

winterbca = "HELLO "
print(winterbca*3)
print(winterbca+" AMROLI")

t3 = ("SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY")
for wday in t3:
      print("TODAY IS :",wday)
print(t3)

t4=(1,2,3,4,5,6,7,8,9,10)

for mt in t4:
    print("Line No: ",mt)
    for wday in t3:
      print(wday*mt,end=" ")
    print("")
      












  

































