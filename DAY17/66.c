// Write a program to union of array
// union which doesnot hold the dublicate element

#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5,6};

    int n1 =4, n2 = 4;

    int unionArr[100];
    
    int size = 0;
    int i, j,found;

    for (i = 0; i < n1; i++)
    {
        unionArr[size++]=arr1[i];
    }

    for(i = 0; i < n2; i++)
    {
        found=0;

        for(j = 0; j < size; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArr[size++] = arr2[i];
        }
    }

    printf("Union of arrays:");

    for (i = 0; i < size; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
