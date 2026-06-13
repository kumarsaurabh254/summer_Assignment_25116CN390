// Write a program to Write function for Fibonacci

#include <stdio.h>
void fibonacci(int n)//this will not return the vlaue so void will use 
{
    int a = 0, b = 1, c;

    for (int i =1; i <= n;i++)
    {
        printf("%d\n",a);

        c = a+b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    fibonacci(n);

    return 0;
}