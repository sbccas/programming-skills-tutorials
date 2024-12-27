//SAMPLE PROGRAM FOR SHOWING DIFFERENT 
// TYPES OF UDF (USER DEFINED FUNCTIONS)
//FOUR TYPES OF UDF

#include <stdio.h>
#include <conio.h>
void myudf1();
void myudf2(int a);
///void myudf3();
///int myudf4(int a);

void main()
{
//UDF 1 SAMPLE 
printf("CALLING UDF1 NO ARGUMENT NO RETURN TYPE \n");
printf("________________________________________\n");
void myudf1();
//UDF 2 SAMPLE 
printf("CALLING UDF2 NO ARGUMENT AND RETURN TYPE \n");
printf("________________________________________\n");
int a = 10;
myudf2(a);

}

void myudf1()
{
    printf("\n WELCOME TO WINTER BCA by myudf1...!\n");
}
void myudf2(int a)
{
    for(int i = 0;i<a;i++)
    {int j = i ;
    printf("\n %d WELCOME TO WINTER BCA by myudf2...!\n",j+1);
    }  
}



