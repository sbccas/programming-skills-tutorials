//WAP to Searching of Element in 
//2-Dimensional Character Array
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  int i,j,k;
  char arr1[5][10];
  char search[10];
  int flag =0;
  printf("\nENTER ELEMENTS IN ARRAY\n");
  for(i=0;i<5;i++)
  {
    printf("ENTER ELEMENT AT LOCATION : %d \n",i);
    gets(arr1[i]);
  }
  printf("ENTER ELEMENT TO SEARCH FOR \n");
  gets(search);
  //SEARCHING ELEMENT FROM ALL ARRAY ITEMS
  for(i=0;i<5;i++)
  {
    if(strcmp(search,arr1[i])==0)
    {
        flag = 1;
        break;
    }

  }
  if (flag==1)
    printf("YOU SEARCHED FOR %s was FOUND...!",search);
    else
    printf("YOU SEARCHED FOR %s was NOT FOUND",search);
}



