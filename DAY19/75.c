// Write a program to transpose the matrix

#include <stdio.h>
int main()
{
    int r, c, i, j;

    printf("Enter the rows:");
    scanf("%d",&r);


    printf("Enter the column:");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter the matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The Transpose of the  Matrix:\n");

    for (i = 0; i < c;i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}