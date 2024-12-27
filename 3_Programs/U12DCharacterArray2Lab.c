//WAP to Input Data in 2D Character 
//Array and then copy that Data 
//to Another 2D Character Array.
//Display Output of Second 2D Array Data
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	int i , j , k;
	char array1[5][10],array2[5][10];
    char marray3[10][10];
        // FOR GETING ELEMENTS IN 
        //  ARRAY1
    for(i=0;i<5;i++)
        {
		printf("ENTER ELEMENT %d:",i);
		gets(array1[i]);
	}
        // FOR PRINTING ELEMENTS IN 
        //  ARRAY1
        printf("DATA IN ARRAY1: \n");
    for(i=0;i<5;i++)
        {
		printf("\nELEMENT at %d: is : ",i);
		puts(array1[i]);
	}
       // FOR COPYING ARRAY DATA TO ANOTHER ARRAY 
     printf("DATA IN ARRAY2: \n");
    for(i=0;i<5;i++)
    {
	 strcpy(array2[i],array1[i] );
     printf("ELEMENT at %d: is : ",i);
	puts(array2[i]);
	}
    //MERGING DATA OF ARRAY1 AND ARRAY2 to ARRAY3
    int lenghtar1,lengtha2, l;
    lenghtar1 = 5;
    lengtha2 = 5;

    for(i=0;i<lenghtar1;i++)
    {
	     strcpy(marray3[i],array1[i] );
    	}
k = lenghtar1 + lengtha2;
l = i;
for(l=0;l<k;l++)
    {
	     strcpy(marray3[l],array2[l] );
    	}
//PRINTING DATA OF ARRAY3
for(i=0;i<10;i++)
    {
	     printf("\nELEMENTS OF ARRAY3 at POSITION %d is %s",i,marray3[i]);
    	}

}

