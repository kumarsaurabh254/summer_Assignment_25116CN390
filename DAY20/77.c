//Write the program to multiply the matrix

#include<stdio.h>
int main()
{
    int  r1 ,c1 ,r2 ,c2;
    int arr1[50][50], arr2[50][50],arr3[50][50];

    printf("ENter the number of row and column for matrix 1:");
    scanf("%d%d",&r1,&c1);

    printf("Enter thhe number of row and column for matrix 2:");
    scanf("%d%d",&r2,&c2);

  
    if(c1!= r2)
    {
        printf("Matrix multiplication is not possible");
        return 0;
    }

    printf("Enter elements of Matrix 1:\n");
    for(int i= 0; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for(int i=0 ;i <r2; i++)
    {
        for(int j=0;j<c2 ;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0; j<c2 ; j++)
        {
            arr3[i][j]=0;

            for(int k =0; k<c1 ; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Result Matrix:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;


   
}