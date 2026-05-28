// Write a program to Find factorial of a number.
#include <stdio.h>
int main()
{
    int i, n, fact;

    printf("Enter the number:");
    scanf("%d", &n);

    fact = 1;

    for (i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    printf("The factorial of a given number is:%d", fact);
    return 0;
}