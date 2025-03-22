//TITLE : WAP to CREATE ARRAY OF STRUCTURE OF STUDENT AMROLI

#include <stdio.h>
#include <conio.h>
struct amroli
{
 int rno;
 char sname[20];
} stud[10];

void main()
{
int i;
clrscr();
for (i=0;i<10;i++)
{
printf("\nPLEASE RNO for Student [%d]: ",i);
scanf("%d",&stud[i].rno);
printf("\nPLEASE ENTER Name for Student [%d]: ",i);
scanf("%s",stud[i].sname);
}
for (i=0;i<10;i++)
{
printf("\nRNO for Student [%d]: %d ",i,stud[i].rno);
printf("\nName for Student [%d]: %s",i,stud[i].sname);
}





   getch();

}