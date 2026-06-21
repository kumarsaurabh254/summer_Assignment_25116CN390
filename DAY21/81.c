
// Write a program to Find string length 
// without strlen()

#include<stdio.h>
int main()
{
    char str[100];
    int i=0 , len=0;

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0' && str[i]!='\n')
    {
        len++;
        i++;
    }

    printf("Length of string = %d",len);

    return 0;
}