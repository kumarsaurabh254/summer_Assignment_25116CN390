//Write a program to print thr factorial of number using function

#include<stdio.h>
int factorial (int n)//function decleration
{
    int fact = 1;

    for(int i=2 ; i <= n ; i++) //these above curly brraces is function definition 
    {
    
    fact = fact * i ;
    }
    return fact ;

}

int main()
{
  
int n ;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int fact = factorial(n);//function calling 

    printf("The factorial of a given number is %d",fact);

    return 0;

}