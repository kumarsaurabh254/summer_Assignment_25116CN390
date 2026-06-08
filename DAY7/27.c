//Write a program to recursive sum of digit

#include<stdio.h>
int sum(int);

int main()
    {
        int n;

        printf("Enter the number to find the sum of digit:");
        scanf("%d",&n);

        printf("%d ",sum(n));
        return 0;

    }

    int sum(int n)
    {
        if(n==0)
        {
            return 0;
        }
         
         return (n%10)+sum(n/10);

    }
