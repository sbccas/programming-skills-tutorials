//TITLE : WAP to CREATE Usere defined function demo
// of type with argument and no return type

#include <stdio.h>
#include <conio.h>
// 1. function declaration
void amroliwel(int a);

void main()
{
int n;
clrscr();
// 3. function call
  printf("enter number for cube: ");
  scanf("%d",&n);
  amroliwel(n);

getch();
}
// 2. function definition
void amroliwel(int a)
{
  int cube;
  cube = a * a * a;
  printf("Your answer is : %d ",cube);
}
















