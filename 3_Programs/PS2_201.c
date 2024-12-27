/* Hitesh Patel Roll No: 999
Prog taking Input and Displaying
 Output in 2-D Array

*/
#include<stdio.h>
#include<conio.h>
void main()
{
//DECLARATION
int amroli[5][3],i,j;

//INITIALIZATION
//STORING DATA IN 2-D ARRAY
for(i=0;i<5;i++)
{
    for (j=0;j<3;j++)
    {
        printf("\nENTER ELEMENT for amroli[%d][%d]",i,j);
        scanf("%d",&amroli[i][j]);
    }
}
//PRINTING DATA IN 2-D ARRAY
for(i=0;i<5;i++)
{
    for (j=0;j<3;j++)
    {
        printf("\nELEMENT for amroli[%d][%d]=%d",i,j ,amroli[i][j]);
       
      }
}

}


//// THIS IS FOR STORING ELEMENTS IN 2 D ARRAY
/*
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
printf("\n Enter Element for amroli[%d][%d]=\n",i,j);
scanf("%d",&amroli[i][j]);
    }
 }
//// THIS IS FOR DISPLAYING ELEMENTS IN 2 D ARRAY
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
printf("\n Element at Location amroli[%d][%d]=   is  %d \n",i,j,amroli[i][j]);
    }
 }
 */

