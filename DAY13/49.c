//Write a program to Input and display array.

#include<stdio.h>
int main()
{
    int arr[100];

    for(int i = 0 ; i< 10 ; i++)
    {
        printf("Enter the array elements %d :",i+1);
        scanf("%d",&arr[i]);


    }

    printf("The elents of an array are:");
    for(int i=0 ; i < 10 ; i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}