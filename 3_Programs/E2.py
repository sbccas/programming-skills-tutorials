"""Exercise 2: Print the following pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

"""

print("ENTER HOW MANY LINES")
n =int(input("NUMBER OF LINES"))

for i in range(1,n+1,1):
    for j in range(1, i+1):
     print(j, end=' ')
    print("")
