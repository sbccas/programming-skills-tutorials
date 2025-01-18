//TITLE: WAP to Create structure of amroli student

#include <stdio.h>
#include <conio.h>

//; DEFINE STRUCTURE FOR AMROLI STUDENT
struct amroli
{
   int rno;
   char sname[20];

};


void main()
{
struct amroli  a1,a2,a3,a4;

printf("\nPlease Enter RNO for Student 1:\n");
scanf("%d",&a1.rno);
printf("\nPlease Enter Name for Student 1:\n");
scanf("%s",a1.sname);

printf("\nPlease Enter RNO for Student 2:\n");
scanf("%d",&a2.rno);
printf("\nPlease Enter Name for Student 2:\n");
scanf("%s",a2.sname);


printf("\nS1 : YOUR NAME IS : %s  and your RNO is : %d",a1.sname,a1.rno);
printf("\nS2 : YOUR NAME IS : %s  and your RNO is : %d",a2.sname,a2.rno);












getch();
}


