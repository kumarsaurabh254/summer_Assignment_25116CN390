//Write a program to Generate Fibonacci series


#include <stdio.h>

int main()
{
    int n, a = 0, b = 1;
    int  fib, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);



    printf("The Fibonacci Series are: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        fib = a + b;
        a = b;
        b = fib;
    }

    return 0;
}