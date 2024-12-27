//PROGRAM FOR DIFFERENCE BETWEEN STRUCTURE AND UNION

#include<stdio.h>
#include<conio.h>
struct book
{
int bid,bqty;
float bprice;
char bname[100];
}b1;
union product
{
int pid;
char pname[100];
}p1,p2;
void main()
{
printf("\n struct size: %d",sizeof(b1));
printf("\n union size: %d",sizeof(p1));

}