//Write a program to Write function for perfect number

#include<stdio.h>

int perfect(int num)
{
    int sum=0;
    for(int i= 1; i< num; i++)
    {
        if(num%i== 0)
            sum= sum +i;
    }
    return sum;
}

int main()
{
    int n;

     printf("Enter a number: ");
    scanf("%d",&n);

    int sum=perfect(n);

    if(sum==n)
    {
        printf("The number is a Perfect Number.");
    }
    else

    {
        printf("The number is not a Perfect Number.");
    }


    return 0;
}