//TITLE : WAP to CREATE STUDENT MARKSHEET USING ARRAY OF STRUCTURE

#include <stdio.h>
#include <conio.h>
struct amroli
{
 int rno;
 char sname[20];
 int m1,m2,m3,m4,m5,tot;
 float per;

} stud[10];

void main()
{
int i;
clrscr();
printf("ENTER DATA FOR STUDENT:\n ");

for(i =0;i<5;i++)
{
printf("ENTER student details for [%d]:\n",i);
printf("Name: ");
scanf("%s",stud[i].sname);
printf("\nPlease Enter Marks for Sub1: ");
scanf("%d",&stud[i].m1);
printf("Please Enter Marks for Sub2: ");
scanf("%d",&stud[i].m2);
printf("Please Enter Marks for Sub3: ");
scanf("%d",&stud[i].m3);
printf("Please Enter Marks for Sub4: ");
scanf("%d",&stud[i].m4);
printf("Please Enter Marks for Sub5: ");
scanf("%d",&stud[i].m5);

stud[i].tot = stud[i].m1 + stud[i].m2 + stud[i].m3 + stud[i].m4 + stud[i].m5;
stud[i].per = stud[i].tot / 5;

}

for (i=0;i<5;i++)
{
printf("Student details for : %d :\n",i);
printf("Name: %s \n",stud[i].sname);
printf("Marks Sub1 Sub2 Sub3 Sub4 Sub5: \n");
printf("\t%4d %4d %4d %4d %4d :\t",stud[i].m1,stud[i].m2,stud[i].m3,stud[i].m4,stud[i].m5);
printf("Total:%d\t",stud[i].tot);
printf("Percentage:%lf\n",stud[i].per);


}

   getch();

}