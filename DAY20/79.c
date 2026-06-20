//Write a program to Find row-wise sum

#include<stdio.h>
int main()
{
    int r, c ,i , j ;
    int arr[50][50];

    printf("Enter number of row and column: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix element:\n");
    for(i=0;i<r;i++)
    {
        for (j =0 ;j< c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i= 0; i<r; i++)
    {
        int sum=0;

        for(j=0 ;j<c; j++)
        {
            sum+=arr[i][j];
        }

        printf("Sum of Row %d = %d\n",i+1,sum);
    }

    return 0;
}