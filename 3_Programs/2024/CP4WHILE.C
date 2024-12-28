#include<stdio.h>
#include<conio.h>

void main()
{
int i=1;
int sum =0;
int n=10;
clrscr();
	while (i<=n)
	{
	 sum = sum +i;
	 printf("\tSUM OF %d = %d\n ",i,sum);
	 i ++;
	}

getch();
}