//Write a program to Find column-wise sum  


#include<stdio.h>
int main()
{
    int r, c , i, j ;
    int arr[50][50];

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix elements:\n");
    for(i= 0 ; i< r ; i++)
    {
        for(j = 0 ; j <c ;j  ++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Column-wise Sum:\n");

    for(j =  0 ;j < c; j++)
    {
        int sum=0;

        for(i=0; i<r ; i++)
        {
            sum += arr[i][j];
        }

        printf("Sum of Column %d = %d\n",j+1,sum);
    }

    return 0;
}