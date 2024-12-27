"""P23 WAP TO FOR DEMO OF WHILE LOOP
"""
print("""P23 WAP TO FOR DEMO OF WHILE LOOP
""")

print("-----------")
print("""
i = 1
j = 5
while i < 4:
 while j < 8:
    print(i, " ", j)
    j = j + 1
    i = i + 1
""")

i = 1
j = 5
while i < 4:
 while j < 8:
    print(i, " ", j)
    j = j + 1
    i = i + 1

print("DEMO 2 FOR NESTED WHILE LOOP")
print("--------------")
i=1
k=1
while i < 6:
 j=1
 while j < 7:
  print("VALUE OF =k ,  i,  j")
  print("VALUE OF =",k," ",i," ",j)
  k=k+1
  j=j+1
  if k==22:
      break
 print("INNER WHILE LOOP END")
 if k==22:
      break
 i= i+1
 
print("OUTER WHILE LOOP ENDS")


print("DEMO 3 FOR NESTED WHILE LOOP")
print("USE OF CONTINUE STATEMENT")
print("--------------")
i=1
k=1
while i < 6:
 j=1
 while j < 7:
  print("VALUE OF =k ,  i,  j")
  print("VALUE OF =",k," ",i," ",j)
  if k ==10:
      continue
  k=k+1
  j=j+1
  
 print("INNER WHILE LOOP END")
 
 i= i+1
 
print("OUTER WHILE LOOP ENDS")


















        
 










