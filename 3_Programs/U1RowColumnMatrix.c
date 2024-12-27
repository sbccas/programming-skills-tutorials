//REMARK : ROW MAJOR 
// COLUMN MAJOR ARRANGEMENT IN 2 D ARRAY

#include <stdio.h>
#include <conio.h>
void main()

{    int a[3][3];
     int i,j,choice;
    printf("\n WHICH ARRANGEMENT YOU WANT");
    printf("\n 1. ROW MAJOR ARRANGEMENT");
    printf("\n 2. COLUMN MAJOR ARRANGEMENT");
    scanf("%d",&choice);
    if  (choice==1)
     {   //ROW MAJOR MATRIX
        for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    }
    else
    {    //COLUMN MAJOR MATRIX
   for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n a[%d][%d]=", j, i);
            scanf("%d", &a[j][i]);
        }
    }
    }
    
    if (choice==1)
    {
    printf("\n-----ROW MAJOR Matrix------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %3d", a[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
    printf("\n-----COLUMN MAJOR Matrix------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %3d", a[i][j]);
        }
        printf("\n");
    }
    }
     
       
}
