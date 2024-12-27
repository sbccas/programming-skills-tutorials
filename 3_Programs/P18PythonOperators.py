#THIS IS DEMO OF PYTHON OPERATORS
#PROGRAM No. 18
#USE ALL OPERATORS IN PYTHON AND CREATE
#WORKING EXAMPLE
#3.2 Operators :
str = """
3.2 Operators :
 3.2.1 Arithmetic Operators(+,-,*,/,%,**,//)
 3.2.2 Assignment Operators(=,+=,-=,/=,*=,//=)
 3.2.3 Comparison Operators ( ==, !=, >,<,>=,<=)
 3.2.4 Logical Operators ( and, or, not)
 3.2.5 identity and member operators ( is, is not, in, not in)"""
print(str)    
a= 10
b= 20

#ARITHMETIC OPERATORS
print("-----------------------")
print("3.2.1 Arithmetic Operators(+,-,*,/,%,**,//)")
c = a+ b
print(c)   #30
c = b-a
print(c)    #10
c = a*b
print(c)   #
c= b/a
print(c)    #
a = 7
b = 27
c= b%a
print(c)     #
b =2
a= 9
c = b**a
print(c)    #
c = b//a
print(c)    #

# Comparison Operators
print("-----------------------")
print("3.2.3 Comparison Operators ( ==, !=, >,<,>=,<=)")
x = "SUTEX"
y = "sutex"
print (x==y)    #
p = 10
k =11
print (p==k)  #
#NOT EQUAL TO
print("-----------------------")
print ("NOT EQUAL TO OPERATOR")
print(p!=k)
y =y.upper()
print(x!=y)  #
print("P > K")
print(p>k)    #
print("P < K")
print(p<k)    #
print("P >= K")
print(p>=k)   #
print("P <= K")
print(p<=k)   #
# Assignment Operators
print("-----------------------")
print("3.2.2 Assignment Operators(=,+=,-=,/=,*=,//=)")
a= 55
b = "SUTEX"
c = a
d = b
print("= OPERATOR")
print(c)     #
print("+= OPERATOR")
c += a      
print(c)     # 110
print("-= OPERATOR")
c -= a      
print(c)     # 55
print("*= OPERATOR")
c *= a      
print(c)     # 3025
print("/= OPERATOR")
c /= a      
print(c)     # 55
print("%= OPERATOR")
c %= a      
print(c)     # 0
print("//= OPERATOR")
c = 110
c //= a      
print(c)     # 2

# Logical Operators
print("-----------------------")
print("3.2.4 Logical Operators ( and, or, not)")
a = 11
b = 22
c = 33
print("and OPERATOR")
print((a<b) and (b>c))
print("and OPERATOR")
print((a<b) and (b<c))
print("or OPERATOR")
print((a<b) or (b<c))
print("not OPERATOR")
print(not((a<b) or (b<c)))


# is operator
print("-----------------------")
print("3.2.5 identity and member operators ( is, is not, in, not in)")

print("""
x=10
y=20
""")
x=10
y=20
print("Python Identity Operators")
print("is operator ")
print("x is y")
print(x is y)   #FALSE
print("is not operator")
print("x is not y")
print(x is not y)  # TRUE
print("---------------------")
print("Member Operators")
str= ("SUTEX","BANK","COLLEGE","OF","COMPUTER","APPLICATIONS","AND","SCIENCE")
print("""
str= ("SUTEX","BANK","COLLEGE","OF","COMPUTER","APPLICATIONS","AND","SCIENCE")
""")
print("print("'COMPUTER'" in str)")
print("COMPUTER" in str) # TRUE

print("print("'ORANGE'" not in str)")
print("ORANGE" not in str) # FALSE



            
