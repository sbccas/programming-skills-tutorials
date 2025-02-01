//TITLE : WAP to Show demo of Recursion using User defined Function
//        for Sum of N Numbers
#include <stdio.h>
#include <conio.h>
//1. function declaration
int sum(int a);

void main()
{
int result,x;
clrscr();
printf("Program for Sum of n Number using Recursion:\n");
printf("Please Enter Number : ");
scanf("%d",&x);
//3. function call
  result= sum(x);
  printf("Sum of %d numbers is %d",x,result);
  getch();
}
//2. function definition
int sum(int n)
{
   if(n!=0)
   {
     return n + sum(n-1);
   }
   else{
   return n;
   }

}









