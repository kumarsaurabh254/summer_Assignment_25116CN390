//Write a program to find the prime number using the function

#include<stdio.h>
int primenumber (int n)
{
    if (n<=1 )
    return 0 ;
   
    for (int i = 2 ; i<= n-1 ; i++)
    {
        
        if(n%i == 0)
        {
           return 0;
        }

    }

    return 1;

}

int main()
{
    int n ;

    printf("Enter the number:");
    scanf("%d",&n);

    int prime = primenumber(n);

    if(prime == 1)
    {

    printf("Enter number is prime number.");
    } 
    else
    {
        printf("Enter number is not prime number.");

    }
    return 0 ; 

}