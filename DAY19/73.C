//Write a program to add the matrix 

#include<stdio.h>
int main()
{
    int r,c,i,j;

    printf("Enter the rows:");
    scanf("%d",&r);

    printf("Enter the columns:");
    scanf("%d",&c);

    int a[r][c], b[r][c];
    int  sum[r][c];

    printf("Enter the first matrix:\n");//taking the input for the first matrix
    for(i=0; i<r; i++)
    {
        for(j=0; j< c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the second matrix:\n");//taking the input for the second matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+ b[i][j];
        }
    }

    printf("the Sum of the Matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}