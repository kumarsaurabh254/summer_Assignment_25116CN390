//Write a program to Find nth Fibonacci term


#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, fib, i;

    printf("Enter the value of n:");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("The %dst Fibonacci term is %d", n, a);
    }

    else if (n == 2)
    {
        printf("The %dnd Fibonacci term is %d", n, b);
    }

    else
    {
        for (i = 3; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }

        printf("The %dth Fibonacci term is %d", n, fib);
    }

    return 0;
}