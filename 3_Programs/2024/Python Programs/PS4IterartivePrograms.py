#WAP to show demo of ITERATIVE STATEMENTS
"""
#WHILE STATEMENT
x=10
while(x<20):
    print("HELLO")
    x+=1

x=0
while x<10:
    print("HELLO " + str(x))
    x+=1


#DEMO OF NESTED WHILE LOOP
k=1
i=5
while (i<10):
    j=5
    while(j<10):
        print("BYE " + str(k))
        k+=1
        j+=1
    i+=1    
        


#NESTED WHILE LOOP DEMO
k=1
i=1
while i < 5:   #i=1,2,3,4
    j=5
    while j < 9: #j=5,6,7,8
        print("HELLO " + str(k))
        j+=1
        k+=1
    i+=1

# NEST DEMO 2
i =1
while i<5:
    #print(i)
    j=5
    while(j<9):
        print(str(i) + " " + str(j))
        j+=1
    i+=1

# BREAK STATEMENT DEMO
i=1
while i<10:  # i=1,2,3,4,5 ---break out of loop
    if(i==5):
        break
    print(i)
    i+=1

#BREAK IN NESTED LOOP
k=1
i=1
while i < 5:   #i=1,2,3,4
    j=5
    while j < 9: #j=5,6,7,8
        print("HELLO " + str(k))
        break
        j+=1
        k+=1
    i+=1
"""

#continue statement demo
i=1
while i<10:  # i=2,3,4,-skip ,6,7,8,9,10
    i+=1
    if(i==5):
        continue
    print(i)






