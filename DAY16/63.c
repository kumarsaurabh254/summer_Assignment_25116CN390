//Write a program to find the pair with given sum



#include<stdio.h>

int main()
{
    int n,i,j,sum,arr[100];

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("Enter target sum: ");
    scanf("%d",&sum);



    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("Pair found:%d and %d",arr[i],arr[j]);
                return 0;
            }
        }
    }

    printf("No pair found");

    return 0;
}