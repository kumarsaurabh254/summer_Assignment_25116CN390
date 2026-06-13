//Write a program to write function to find thee maximum 
 #include<stdio.h>
 int maximum  (int a , int b)
 {
    int max ;

    if ( a > b)
    {
        return a;
    }
    else
    {
        return b ;
    }
    return max ;

 }

 int main()
 {
    int a , b ;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    int max = maximum(a  , b );

 
    printf("The maximum value is %d",max);
    return 0 ;

 }