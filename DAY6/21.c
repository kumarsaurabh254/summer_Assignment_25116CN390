//Write a program to convert decimal to binary

#include<stdio.h>
int main()
{
    int i=0,n;
    int binary[i];

    printf("Enter the binary number:");
    scanf("%d",&n);

    while(n>0)
    {
        binary[i] = n%2;
        n=n/2;
        i++;
    }

    printf("The binary number:");

    for(int j=i-1; j>=0; j--)
    {
        printf("%d",binary[j]);
    }

    return 0;
}