//Write a program on c to print the sum of two number using function


#include<stdio.h>
int add (int a , int b )
{
    int sum;

     sum = a + b ;

     return sum ;

}

int main()
{
    int a , b ;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);

      int sum = add(a,b);

     printf("The sum of two number is:%d",sum);

     return 0;

}