//WAP to Create Student Marksheet Using ARRAY OF STRUCTURE
//Structure in C Programming

#include <stdio.h>
#include <conio.h>

typedef struct winterBCA 
{
    int RollNo;
    char sname[20];
    int SMarks1,SMarks2,SMarks3,SMarks4;
}wdiv1;

void main()
{
   struct winterBCA stu[10];
   wdiv1 w101;
   int i,j;
   for (i=0;i<2;i++)
   {
    j = i +1;
   printf("\nENTER NAME OF STUDENT %d",j);
   scanf("%s",stu[i].sname);
    printf("\nENTER ROLL NO OF STUDENT %d",j);
   scanf("%d",&stu[i].RollNo);
   printf("\nENTER MARKS OF SUBJECT 1");
   scanf("%d",&stu[i].SMarks1);
   printf("\nENTER MARKS OF SUBJECT 2");
   scanf("%d",&stu[i].SMarks2);
   printf("\nENTER MARKS OF SUBJECT 3");
   scanf("%d",&stu[i].SMarks3);
    printf("\nENTER MARKS OF SUBJECT 4");
   scanf("%d",&stu[i].SMarks4);
   }


 printf("\nMARKSHEET OF STUDENTS \n");
   for (i=0;i<2;i++)
   {
    int  tmarks=0;
float tper=0;
     tmarks = stu[i].SMarks1 + stu[i].SMarks2+  stu[i].SMarks3 + stu[i].SMarks4;
     tper = (tmarks*100)/400;
 printf("\n_________________________________\n");
 printf("NAME STUDENT :%s  ",stu[i].sname);
 printf("\tROLL NO :%d  \n",stu[i].RollNo);
 printf("\tSUBJECT                  MARKS\n");
 printf("\n_________________________________\n");
 printf("\nSUBJECT 1\t\t\t\t\t\%d\n",stu[i].SMarks1);
 printf("\nSUBJECT 2\t\t\t\t\t\%d\n",stu[i].SMarks2);
 printf("\nSUBJECT 3\t\t\t\t\t\%d\n",stu[i].SMarks3);
 printf("\nSUBJECT 4\t\t\t\t\t\%d\n",stu[i].SMarks4);
 printf("\n_________________________________\n");
 printf("\nTOTAL OF 400\t\t\%d\n",tmarks);
 printf("\nPERCENTAGE OUT OF 100\t\t\%3.2f\n",tper);


     
   }
   
    


   
   


}