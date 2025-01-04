//TITLE: WAP to Create TRANSPOSE OF MATRIX

#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,a[3][3],b[3][3];
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


  printf("\n MATRIX A : \n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("%3d\t",a[i][j]);
       }
       printf("\n");
    }
    //CREATING TRANSPOSE
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	    b[j][i]=a[i][j];
       }
       printf("\n");
    }

   printf("TRANSPOSE MATRIX : \n");
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
       {
	   printf("%3d",b[i][j]);
	 }
	printf("\n");
       }

getch();
}


