//Write a program to Linear search 

#include<stdio.h>
int main()
{
    int i , n , elementnum;
    int arr[100];
    int found =0 ;

    printf("ENter the number of terms:");
    scanf("%d",&n);

    for(i=0 ; i< n ; i++)
    {
        printf("Enter the elements %d :",i+1);
        scanf("%d",&arr[i]);

    }
    //Linaer search 
    printf("Enter the element to be search:");
    scanf("%d",&elementnum);

    for (i = 0 ;i <n ;i++)
    {
        if(arr[i]==elementnum)
        {
            found =1;
            printf("The found position of element:%d\n",i+1);
            break ;


        }
    }
    if (found == 0)
    {
        printf("Element nmuber is not found.");

    }

    return 0;



}