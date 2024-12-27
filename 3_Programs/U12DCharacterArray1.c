//INPUTING AND DISPLAYING DATA IN CHARACTER ARRAY

#include <stdio.h>
#include <conio.h>

void main()
{

    char address[5][10];
    int i;
    for (i=0;i<5;i++)
    {
        scanf("%s",&address[i]);
    }
    //PRINTING STORED DATA
    for (i=0;i<5;i++)
    {
        printf("%s\n",address[i]);
    }
}



