//TITLE: WAP to Create 1 D Character Array

#include <stdio.h>
#include <conio.h>
void main()
{
int i;
char str[] = "AMROLI BCA";
clrscr();

  printf("YOUR NAME IS : %s",str);

  for (i=0;i<10;i++)
  {
  printf("\n %c",str[i]);

  }



getch();
}


