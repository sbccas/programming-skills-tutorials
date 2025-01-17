//TITLE: WAP to Create 2 D Character Array

#include <stdio.h>
#include <conio.h>
void main()
{
int i;
char name[5][10] ;

clrscr();
//   printf("YOUR NAMES ARE : %s\n",name);
  for (i=0;i<5;i++)
  {
  scanf("%s",&name[i]);

  }

  for (i=0;i<5;i++)
  {
  printf("%s\n",name[i]);

  }



getch();
}


