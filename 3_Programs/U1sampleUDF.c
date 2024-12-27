//SAMPLE PROGRAM FOR USER DEFINED FUNCTION
//UDF FOR ADDING 2 NUMBERS

#include <stdio.h>
#include <conio.h>
int wsum(int a, int b); //UDF DECLARATION
void demomessage();
void main()
{
  int val1,val2,wans;
  printf("PROGRAM FOR ADDITION USING UDF\n");
  printf("\nENTER NUMBER 1: ");
  scanf("%d",&val1);
  printf("\nENTER NUMBER 2: ");
  scanf("%d",&val2);
  wans = wsum(val1,val2);//UDF CALL
printf("\nYOUR RESULT IS : %d",wans);
 demomessage();
}

int wsum(int val1,int val2)  //UDF DEFINATION
{
   //int result;
   //result  = val1+val2;
   //return result;
   return val1+val2;
}
void demomessage()
{
    int i;
    for (i=0;i<100;i++)
    {
        printf("\n%d HELLO GOOD MORNING\n",i);
    }
}




