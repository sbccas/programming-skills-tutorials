//TITLE : WAP to CREATE Usere defined function demo
// of type no argument but return type

#include <stdio.h>
#include <conio.h>
// 1. function declaration
int amroliwel();

void main()
{
int ans;
clrscr();
// 3. function call
   ans = amroliwel();
   printf("Your answer is : %d ",ans);

getch();
}


// 2. function definition
int amroliwel()
{
  int cube, n;
  printf("enter number for cube: ");
  scanf("%d",&n);
  cube = n * n * n;
  return cube;
}
















