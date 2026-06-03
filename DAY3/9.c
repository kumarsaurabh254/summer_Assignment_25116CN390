// Write a program to Check whether a number is prime.

#include <stdio.h>

int main()
{
    int i, n, flag = 1; // 1 is neither prime nor composite number 

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n <= 1)
        flag = 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)//we may use flag with any other variable
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}