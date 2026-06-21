// Write a program to Count words in a sentence

#include<stdio.h>
int main()
{
    char str[100];
    int i = 0, words = 0;

    printf("Enter a sentence:");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
    {
        words = 1;
    }

    while (str[i] != '\0')
    
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            words++;
        }
        i++;
    }



    printf("Number of words = %d", words);

    return 0;
}