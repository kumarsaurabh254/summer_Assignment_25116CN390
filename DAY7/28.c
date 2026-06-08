//Write a program to recursive reverse

#include<stdio.h>
int reverse(int n, int rev);

int main()
{
    int n ;

    printf("Enter the number:");
    scanf("%d",&n);

    printf("%d ",reverse(n,0));
}

int reverse(int n,int rev)
{
    if (n==0)
    {
        return rev;
    }

    rev =rev*10+(n%10);

    return reverse(n/10,rev);
}
