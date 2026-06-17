//Write a program to Find common elements

#include<stdio.h>

int main()
{
    int i,j;
    int a[]={1,2,3,4,5};
    int b[]={3,4,5,6,7};
   

    printf("The Common elements:");

    for(i=0;i<5 ;i++)
    {
        for(j=0; j<5;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);

                break;
            }
        }
    }

    return 0;
}