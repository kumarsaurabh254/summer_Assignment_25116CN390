//Write the program to find the largest prime factor


#include<stdio.h>
int main()
{
    int i , n ;
    int largestfactor=0;


    printf("Enter the number:");
    scanf("%d",&n);

    for (i =2; i<= n ; i++)
    {
        while(n%i == 0)
        {
            largestfactor= i ;
            n = n/i;
        }
    }

    printf("%d is the largest prime factor.",largestfactor);

    return 0 ;


}