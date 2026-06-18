//Write a program to bubble sort

#include<stdio.h>
int main()
{
    int i , j ,n ;
    int temp;
    
    int arr[100];

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0 ; i < n ;i++)
    {
        printf("Enter the array no. %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n -1; i++)
    {
        for(j=0; j<n-1 ;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("The sorted array:");
    printf("\n");

    for(i=0 ; i < n ; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0 ;

}