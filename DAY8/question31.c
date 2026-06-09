//Write a program to print the character triangle
// A 
// AB 
// ABC 
// ABCD 
// ABCDE 

#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
            
        }
        printf("\n");
    }

    return 0;
}