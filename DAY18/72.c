//Write a program to Sort array in descending order

#include<stdio.h>
int main()
{
    int i , j ,n ;
    int temp ;
    
    
    int arr[100];

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0 ; i< n ;i++)
    {
        printf("Enter the array no. %d:",i+1);
        scanf("%d",&arr[i]);
    }
     for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in descending order:\n");

    for(i=0 ; i< n ; i++)
    {
        printf("%d\n",arr[i]);
    }


    return 0;

}
