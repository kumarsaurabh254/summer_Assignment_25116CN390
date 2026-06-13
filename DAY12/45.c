//Write a program to Write function for palindrome.

#include<stdio.h>
int palindrome (int num)

{ 
    int digit , reverse = 0;
    

    while(num != 0)
    {
        digit = num % 10 ;
        reverse = reverse * 10 + digit ;

        num = num / 10 ;


    }
    return reverse ;
    
}

int main()
{
    int n , originalnum ;
    

    printf("ENter the number :");
    scanf("%d",&n);

    originalnum = n ;


    int reverse  = palindrome(n);

    if(originalnum == reverse)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not palindrome.");
    }

    return 0 ;

}