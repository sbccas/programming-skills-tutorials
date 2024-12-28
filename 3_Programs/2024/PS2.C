//TITLE : WAP to STORE and Print ELEMENTS IN
// 2 D NUMERIC ARRAY OF USER DEFINED SIZE (m,n) [2,2]
#include <stdio.h>
#include <conio.h>

void main()
{
int i,j;
int a[2][3];
clrscr();
    // storing data in array
    for (i=0;i<2;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("\nEnter element for a[%d][%d]=",i,j);
	    scanf("%d",&a[i][j]);
       }
     }
    // printing elements of array
    for (i=0;i<2;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("a[%d][%d]=%d\t",i,j,a[i][j]);

       }
       printf("\n");
     }
     for (i=0;i<2;i++)
    {
       for (j=0;j<3;j++)
       {
	    printf("\t%d\t",a[i][j]);

       }
       printf("\n");
     }
getch();
}