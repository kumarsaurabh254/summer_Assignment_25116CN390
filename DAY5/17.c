//write a program to check the perfect number

#include<stdio.h>
int main()
{
    int n ,i ;
    int sum = 0 ;


    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1 ; i<=n/2 ; i++)
    {
        if(n%i == 0)
        {
        sum = sum+i;
        }

    }

    if(sum == n )
    {
        printf("%d is the perfect number.",n);
    }
    else
    {
        printf("%d is not perfect number.",n);
    }
    return 0  ;


    


}