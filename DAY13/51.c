//Write a program to Find largest and smallest element. 

#include<stdio.h>
int main()
{
    int i , n ;
    int arr [100];
    int largest ,smallest ;
    
    printf("ENter the size of an array:");
    scanf("%d",&n);

    for(i =0 ; i < n ; i ++)
    {
        printf("Enter the elements %d:",i+1);
        scanf("%d",&arr[i]);

    }

    largest = smallest = arr[0];
    
     for(i=1;i<n;i++)
    {
        if(arr[i] > largest)
        
            largest = arr[i];
        

        if(arr[i] < smallest)
        
            smallest = arr[i];
    }

    printf("Largest element = %d\n",largest);
    printf("Smallest element = %d\n",smallest);


   

    

    return 0;
}