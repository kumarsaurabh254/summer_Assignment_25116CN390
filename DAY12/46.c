//Write a program to Write function for Armstrong

#include<stdio.h>
int armstrong (int num)

{
    int digit , sum=0 , temp;

    temp=num ;

    while(temp != 0)
    {
        digit =temp% 10;

        sum = sum+ (digit *digit *digit);

        temp = temp /10 ;

    }
    return sum; 
}
 int main()
 {
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);

    int sum = armstrong(n);

    if(sum == n)
    {
        printf("The number is an armstrong.");

    }
    else
    {
        printf("The number is not armstomg.");
    }

    return 0 ;
 }