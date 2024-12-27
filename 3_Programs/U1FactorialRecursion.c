//SAMPLE PROGRAM FOR FACTORIAL OF NUMBER WITHOUT USING RECURSION
//FACTORIAL OF NUMBER WITHOUT USING RECURSION
#include <stdio.h>
#include <conio.h>
void main()
{
   printf("SAMPLE PROGRAM FOR FACTORIAL \n ");
   printf("------------------------------\n ");
    double i,n,mul;
    mul = 1;
    printf("WHOSE FACTORIAL YOU WANT TO FIND \n ");
    scanf("%d",&n);
    for (i = 1;i<=n;i++)
    {
        mul = mul *i;
        }
   printf("\nFACTORIAL OF %d is %d",n,mul);
}