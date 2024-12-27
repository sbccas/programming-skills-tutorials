#Exercise 6: Count the total number of digits in a number

num = 9879879870
count = 0
while num != 0:
    # floor division
    # to reduce the last digit from number
    num = num // 10
    print("new number =",num)
    # increment counter by 1
    count = count + 1
print("Total digits are:", count)
