//COPYING AN ARRAY TO ANOTHER ARRAY

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{

    char arr1[5][10],arr2[5][10];
       int i,j;
       printf("PLEASE ENTER DATA in ARR1\n");
    for (i=0;i<5;i++)
    {
        
        gets(arr1[i]);
    }
    //Loop to Copy elements from one array to another array
    for(i=0;i<5;i++)
    {
    strcpy(arr2[i],arr1[i]);
    }
    //PRINTING STORED DATA
    printf("DATA STORED IN ARR2 by COPYING:\n");
    for (i=0;i<5;i++)
    {
        puts(arr2[i]);
    }
}



