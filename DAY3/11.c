//Write a program to Find GCD of two numbers

#include<stdio.h>
int main()
{
    int a , b , i , n  , gcd ;

     printf("Enter the value of a:");
     scanf("%d",&a);

     printf("Enter the value of b:");
     scanf("%d",&b);

     for(i = 1 ; i <= a  && i <= b ; i ++)
     {

        if(a % i == 0 && b % i == 0)
        {
            gcd = i ;
        }
     }

     printf("the gcd of a given number is %d",gcd);

     return 0 ;



}