//Write a program to frequency of an elements 

#include<stdio.h>
int main()
{
    int i , n;
    int arr[100];
    int count ,key;
   

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0 ; i< n ; i++)
    {
        printf("Enter the elements %d :",i+1);
        scanf("%d",&arr[i]);

    }
    printf("Enter the element whose frequency you want to find: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency of %d:= %d", key, count);

    return 0;
}

    



