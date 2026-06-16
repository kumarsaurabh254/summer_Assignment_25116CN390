//Write a program to Find maximum frequency element


#include <stdio.h>
int main()
{
    int n, i, j;
    int arr[100];
    int maxFreq = 0, ele;

    printf("Enter the size of an array:");
    scanf("%d",&n);


    for(i = 0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            ele = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n",ele);

    printf("Frequency = %d", maxFreq);

    return 0;
}