//Write the program to find the diagonal sum

#include<stdio.h>
int main()
{
    int n,i,j;
    int sum=0;

    printf("Enter the size of square matrix: ");
    scanf("%d",&n);

    int a[n][n];

    printf("Enter matrix elements:\n");

    for(i=0 ; i< n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i= 0 ; i< n; i++)
    {
        sum =sum +a[i][i];
    }

    printf("diagonal Sum =%d",sum);

    return 0;
}