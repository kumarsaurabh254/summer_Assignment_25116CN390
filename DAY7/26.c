//Write a program to recursive fibonacci

#include<stdio.h>
int fibonacci(int);

int main()
{
    int i,n;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0; i<=n ; i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;


}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);

}