//Write a program to Check symmetric matrix

#include<stdio.h>
int main()
{
    int n,i,j;
    int arr[50][50];
    int symmetric=1;

    printf("Enter order of square matrix:");
    scanf("%d",&n);

    printf("Enter matrix elements:\n");
    for(i=0 ;i<n ; i++)
    {
        for(j=0; j<n ;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i <n ; i ++)
    {
        for(j = 0; j< n; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                symmetric = 0;
                break;
            }
        } 

        if (symmetric == 0 )
        {
            break;
        }
    }

    if(symmetric)
    {
        printf("Matrix is Symmetric");
    }
    else
    {
        printf("Matrix is Not Symmetric");
    }

    return 0;
}