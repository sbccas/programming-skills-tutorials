//TITLE: WAP to Show MATRIX MULTIPLICAION

#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,k,a[3][3],b[3][3],mul[3][3];
clrscr();
   printf("\nADD DATA TO MATRIX A :\n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("Enter element for a[%d][%d]=",i,j);
	    scanf("%d",&a[i][j]);
       }
     }
     printf("\nADD DATA TO MATRIX B :\n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("Enter element for b[%d][%d]=",i,j);
	    scanf("%d",&b[i][j]);
       }
     }
 
  printf("\n MATRIX A : \n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("%3d\t",a[i][j]);
       }
       printf("\n");
    }
 printf("\n MATRIX B : \n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("%3d\t",b[i][j]);
       }
       printf("\n");
    }
    //MATRIX MULTIPLICATION
     printf("\n MATRIX MUL =  MATRIX A * MATRIX B  : \n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
         mul[i][j] = 0;
         for ( k = 0; k < 3; k++)
         {
            mul[i][j] += a[i][k] * b[k][j];
         }
         	    
       }
       
    }
    printf("\n MATRIX MUL : \n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("%3d\t",mul[i][j]);
       }
       printf("\n");
    }
getch();
}

