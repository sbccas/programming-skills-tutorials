#SET PROGRAMS

set1={"S","M","T","W","T","F","S"}
set2={1,2,3,4,5,6,7,8,9,10,3,5,7,9}
print(set1)
print(set2)
print(set1)
print(set2)
set3=set1
print(set3)
set4 =set({"BCA","BBA","BCOM"})
print(set4)
print(type(set4))
set5={"SUN","MON","TUE","WED","THU","FRI","SAT"}
print(set5)

for se in set5:
   print(se)


print("SET5 ni length = ",len(set5))


#SET OPERATIONS
print("PROGRAM OF SET OPERATIONS")
x1={'a','b','c'}
x2={'c','d','e'}
x3= x1.union(x2)
print("""x3= x1.union(x2)""")
print(x3) #O/P: {'d', 'b', 'e', 'c', 'a'}

x3=x1 | x2
print("""x3=x1|x2""")
print(x3)

#UNION OPERATIONS
a={1,2,3,4}
b={2,3,4,5}
c={3,4,5,6}
d=a.union(b,c)
print("""d=a.union(b,c)""")
print(d)
d=a|b|c
print("""d=a|b|c""")
print(d)

#INTERSECTION OPERATIONS
print("#INTERSECTION OPERATIONS")
x1={'a','b','c'}
x2={'c','d','e'}
print("x1=",x1)
print("x2=",x2)
x3= x1.intersection(x2)
print("""x3= x1.intersection(x2)""")
print("x3=",x3)
x3= x1 & x2
print("x3= x1 & x2")
print("x3= ",x3)
a={1,2,3,4}
b={2,3,4,5}
c={3,4,5,6}
print("a=",a)
print("b=",b)
print("c=",c)
d=a.intersection(b,c)
print("d=a.intersection(b,c)")
print("d=",d)
d= a & b & c
print("d= a & b & c")
print("d=",d)

#add Method
a={1,2,3,4}
a.add(5)
print("a=",a) #O/P : {1, 2, 3, 4, 5}

str = """#add Method
a={1,2,3,4}
a.add(5)
print("a=",a) #O/P : {1, 2, 3, 4, 5}
"""
print(str)

#clear method
a={1,2,3,4}
a.clear()
print("a=",a)

str="""
#clear method
a={1,2,3,4}
a.clear()
print("a=",a)
"""
print(str)

str="""
#copy method
a={1,2,3,4}
b = a.copy()
print("b=",b)
"""
print(str)

#copy method
a={1,2,3,4}
b = a.copy()
print("b=",b)

str="""
#remove and discard methods
a={1,2,3,4}
print("a=",a)
#a.remove(5) # ERROR
a.remove(3)
a.discard(5)
print("a=",a)
"""
print(str)

#remove and discard methods
a={1,2,3,4}
print("a=",a)
#a.remove(5) # ERROR
a.remove(3)
a.discard(5)
print("a=",a)
a.discard(1)
print("a=",a)

str="""
#pop() method
a={1,2,3,4}
print("a=",a)
x= a.pop()

print("popped item=",x)
print("a=",a)
"""
print(str)

#pop() method
a={1,2,3,4}
print("a=",a)
x= a.pop()

print("popped item=",x)
print("a=",a)

str="""
#update method
x1={'a','b','c'}
x2={'c','d','e'}
x1.update(x2)
print(x1)
"""
print(str)
#update method
x1={'a','b','c'}
x2={'c','d','e'}
x1.update(x2)
print(x1)
t1=(1,2)
x1.update(t1)
print(x1)











































































































































































   










   





