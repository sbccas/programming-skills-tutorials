#include <stdio.h>
#include <conio.h>
void main()

{    int a[3][3], i, j, b[3][3];
    printf("\n Enter matrix elements:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n-----Matrix------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %3d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Transpose of matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\n-----Matrix------\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %3d", b[i][j]);
        }
        printf("\n");
    }
}
