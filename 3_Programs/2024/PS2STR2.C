//TITLE: WAP to COPY 2 2D Character Arrays

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
int i;
char str1[5][10],str2[5][10];

clrscr();

//  printf("YOUR NAMES ARE : %s\n",name);
  printf("ENTER NAMES IN ARRAY 1:\n");
  for (i=0;i<5;i++)
  {
  scanf("%s",&str1[i]);
  }
  //COPY STR1 into STR2

  for (i=0;i<5;i++)
  {
  strcpy(str2[i],str1[i]);

  }
  //PRINTING ARR2
  for (i=0;i<5;i++)
  {
  printf("%s\t",str2[i]);
  }




getch();
}


