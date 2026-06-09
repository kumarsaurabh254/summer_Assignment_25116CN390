//Write a program to print the half pyramid 

#include<stdio.h>
int main()
{
    int i,j,n ;

    for(i =1;i<=6;i++)

    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;


}