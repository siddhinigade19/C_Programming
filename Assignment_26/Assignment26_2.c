//accept character from user & if character is small display its capital letter and if it is capital then display its corresponding small letter. in other cases display as it is.

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("Output: %c",ch);

}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}