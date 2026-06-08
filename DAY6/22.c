//Write a program to convert the binary to decimal number

#include <stdio.h>
int main()
{
    int n,digit;
    int decimal = 0;
    int power = 1;

    printf("Enter the  binary number:");
    scanf("%d",&n);

    while (n > 0)
    {
        digit = n%10;
        decimal = decimal+digit*power;
        power = power*2;
        n = n/10;
    }

    printf("The Decimal number is:%d",decimal);

    return 0;
}