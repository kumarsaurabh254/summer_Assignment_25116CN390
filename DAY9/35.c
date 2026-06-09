//Write a program to print the repeated character pattern
// A 
// BB 
// CCC 
// DDDD 
// EEEEE

#include<stdio.h>
int main()
{
    int i ,j;
    char ch='A';

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+i-1);
            
        }
        printf("\n");
    }

    return 0;
}