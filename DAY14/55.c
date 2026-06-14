//Write a program to find the second laregest element of an array

#include<stdio.h>
int main()
{
    int i , n ;
    int arr[100];

    int largest , seclargest;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0 ; i< n ; i++)
    {
        printf("Enter the elements %d :",i+1);
        scanf("%d",&arr[i]);

    }

    largest =seclargest=arr[0];

    for(i=0 ;i< n ;i++)
    {
        if(arr[i]> largest)
        {
            seclargest = largest;
            largest = arr[i];
        }

        else if(arr[i]> seclargest && arr[i] != largest)
        {
            seclargest = arr[i];
        }
    }

    printf("The second largest eleemets :%d",seclargest);

    return 0;
}