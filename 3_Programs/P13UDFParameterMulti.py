#PROGRAM 13. NAME : HITESH P PATEL
#ROL NO: 999 FYBCA DIV -1
#UDF WITH MULTI PARAMETER DATA
print("Program Start")
def amrolibca(sname,rollno):
   print("WELCOME TO AMROLIBCA, Dear " + sname
         + " your number is ")
   print(rollno)
print("Program Ends...!!!")

amrolibca("AAKASH",999) #WORKING FINE
#amrolibca(999,"AAKASH") DATA CHANGE SEQ CHANGE
amrolibca("HITESH")
#TypeError: amrolibca() missing 1
#required positional argument: 'rollno'











