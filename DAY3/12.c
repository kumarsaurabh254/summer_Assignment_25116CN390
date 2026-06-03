//Write a program to Find LCM of two numbers

#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter the value a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    max = (a > b) ? a : b;

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            printf("The LCM of a given number is = %d", max);
            break;
        }
        max++;
    }

    return 0;
}