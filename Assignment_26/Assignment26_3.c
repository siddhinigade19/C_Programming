// accept char from user. if it is capital then display all char from input char till Z. if input char is small then print all char in reverse order till a. in other cases return directly


#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        return;
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}