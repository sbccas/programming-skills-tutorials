#x= 100   #global variable

def myfunction1():
    print("TODAY IS A RAINY DAY.....!!!")
    print("IT IS A ORANGE ALERT DAY.....!!!")
    global x
    #x= 200     #local variable
    x = True
    print(x)
    print(type(x))

def myfunction2():
    print("TODAY IS A RAINY DAY.....!!!")
    print("IT IS A ORANGE ALERT DAY.....!!!")
    #x  = 300     #local variable
    
    print(x)
    

def myfunction3():
    print("TODAY IS A RAINY DAY.....!!!")
    print("IT IS A ORANGE ALERT DAY.....!!!")
    #x  = 400     #local variable
    
    print(x)
    

def myfunction4():
    print("TODAY IS A RAINY DAY.....!!!")
    print("IT IS A ORANGE ALERT DAY.....!!!")
    #x  = 500     #local variable
    
    print(x)

myfunction1()
myfunction2()
myfunction3()
myfunction4()
print("GLOBAL VARIABLE CHECKING")
print(x)

