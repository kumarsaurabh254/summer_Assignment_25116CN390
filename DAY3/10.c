//Write a program to Print prime numbers in a range. 

// #include<stdio.h>
// int main()
// {
//     int i , n , flag = 1 ;

//     printf("Enter the value of n:");
//     scanf("%d",&n);

//     flag = 1 ;

//     for (i = 2 ; i < n ; i++)

//     {
//         if(n % i == 0 )
//         {
//             flag = 0 ;
//             break;
//         }


    
//     }
//     if(flag)
//     {
//         printf("The given number is prime number.");

//     }
//     else
//     {
//         printf("The given number is composite number.");
//     }


//     return 0;


// }    



#include <stdio.h>

int main()
{
    int start, end, i, j, flag;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
            continue;

        flag = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", i);
    }

    return 0;
}