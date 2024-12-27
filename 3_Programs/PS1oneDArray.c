/* Hitesh Patel Roll No: 999
WAP To scan and print 5 elements in Array.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 //DECLARATION 
 int i,amroli[5];
// INITIALIZATION
int fybca[5] ={0,0,0,0,0};
//STORING VALUES IN ARRAY
 for(i=0;i<5;i++)
{
 printf("Enter Value for amroli[%d]=>",i);
 scanf("%d",&amroli[i]);
 }
//PRINTING VALUES IN ARRAY
for(i=0;i<5;i++)
{
printf("\n amroli[%d]=%d",i,amroli[i]);
}
}
