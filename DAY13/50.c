//Write a program to Find sum and average of array

#include<stdio.h>
int main()
{
    int sum = 0 ;
    int i,n;
    float average;
    
    int arr [100];

    printf("Enter the size of array:");
    scanf("%d",&n);

    for(i =0 ; i< n ; i++)
    {
        printf("Enter the array %d:",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];

    }
    
    average = (float)sum/n;
   
    
         printf("the sum of array elents is %d\n",sum);

         printf("The average of an array elements are %f\n",average);


   
    return 0;

}