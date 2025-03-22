#WAP to show demo of Local and Global Variable Concept 

x = "AMROLI BCA"
def amroli():
    global x
    #x = "R V Patel"
    print("My College name is : " + x)

amroli()
print("My College name is : " + x)
print(type(x))
