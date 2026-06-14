//Write a program to find the duplicates in the array

#include<stdio.h>
int main()
{
    int i , n ,j ;

    int arr[100];

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for (i =0 ; i < n ;i++)
    {
        printf("Enter the elements %d:",i+1);
        scanf("%d",&arr[i]);

    }

    printf("The duplicate elements are:");

    for (i =0 ; i< n ; i++)
    {
        for (j=i+1; j< n ; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break ;

            }

        }
    }

    return 0 ;


}