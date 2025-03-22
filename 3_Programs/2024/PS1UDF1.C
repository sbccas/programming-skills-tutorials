//TITLE : WAP to CREATE Usere defined function demo

#include <stdio.h>
#include <conio.h>
// 1. function declaration
int amroli(int a , int b);

void main()
{
   int op;
   clrscr();
   // 3. function call
   op = amroli(4,5);
  printf("Your answer is %d :  ",op);
   getch();

}
// 2. function defination
int amroli(int a, int b)
{
  //int ans;
  printf("FUNCTION STARTS HERE.....");
 // ans = a+ b;
  return  a + b;
}








