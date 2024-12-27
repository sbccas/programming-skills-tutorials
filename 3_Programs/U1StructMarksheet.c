//WAP to Create Student Marksheet Using 
//Structure in C Programming


#include <stdio.h>
#include <conio.h>
struct winterBCA
{
    int RollNo;
    char sname[20];
    int SMarks1,SMarks2,SMarks3,SMarks4;
}student1,student2,student3,s4,sdata[70];

void main()
{
   printf("ENTER NAME OF STUDENT 1");
   scanf("%s",student1.sname);
   printf("ENTER ROLL NO OF STUDENT 1");
   scanf("%d",&student1.RollNo);
printf("ENTER SUB 1 MARKS OF STUDENT 1");
   scanf("%d",&student1.SMarks1);
printf("ENTER SUB 2 MARKS OF STUDENT 1");
   scanf("%d",&student1.SMarks2);
printf("ENTER SUB 3 MARKS OF STUDENT 1");
   scanf("%d",&student1.SMarks3);
printf("ENTER SUB 4 MARKS OF STUDENT 1");
   scanf("%d",&student1.SMarks4);

    printf("ENTER NAME OF STUDENT 2");
   scanf("%s",student2.sname);
   printf("ENTER ROLL NO OF STUDENT 2");
   scanf("%d",&student2.RollNo);
printf("ENTER SUB 1 MARKS OF STUDENT 2");
   scanf("%d",&student2.SMarks1);
printf("ENTER SUB 2 MARKS OF STUDENT 2");
   scanf("%d",&student2.SMarks2);
printf("ENTER SUB 3 MARKS OF STUDENT 2");
   scanf("%d",&student2.SMarks3);
printf("ENTER SUB 4 MARKS OF STUDENT 2");
   scanf("%d",&student2.SMarks4);

int Tmarks=0;

   Tmarks = student1.SMarks1 + student1.SMarks2 + student1.SMarks3 + student1.SMarks4;
   
 printf("\nMARKSHEET \n");
 printf("MARKSHEET OF STUDENT 1\n");
 printf("\n_________________________________\n");
 printf("NAME STUDENT :%s  ",student1.sname);
 printf("\tROLL NO :%d  \n",student1.RollNo);
 printf("\tSUBJECT                  MARKS\n");
 printf("_________________________________\n");
printf("\nSUBJECT 1\t\t\t\t\t\%d\n",student1.SMarks1);
printf("\nSUBJECT 2\t\t\t\t\t\%d\n",student1.SMarks2);
printf("\nSUBJECT 3\t\t\t\t\t\%d\n",student1.SMarks3);
printf("\nSUBJECT 4\t\t\t\t\t\%d\n",student1.SMarks4);
 printf("\n_________________________________\n");
 printf("\nTOTAL OF 400\t\t\%d\n",Tmarks);

Tmarks=0;
Tmarks = student2.SMarks1 + student2.SMarks2 + student2.SMarks3 + student2.SMarks4;

printf("\nMARKSHEET \n");
 printf("MARKSHEET OF STUDENT 2\n");
 printf("\n_________________________________\n");
 printf("NAME STUDENT :%s  ",student2.sname);
 printf("\tROLL NO :%d  \n",student2.RollNo);
 printf("\tSUBJECT                  MARKS\n");
 printf("\n_________________________________\n");
printf("\nSUBJECT 1\t\t\t\t\t\%d\n",student2.SMarks1);
printf("\nSUBJECT 2\t\t\t\t\t\%d\n",student2.SMarks2);
printf("\nSUBJECT 3\t\t\t\t\t\%d\n",student2.SMarks3);
printf("\nSUBJECT 4\t\t\t\t\t\%d\n",student2.SMarks4);
 printf("\n_________________________________\n");
 printf("\nTOTAL OF 400\t\t\%d\n",Tmarks);


}