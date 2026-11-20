//accept string from user and accept one character. check whether the character is present in string or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;
        }

        i++;
    }

    return FALSE;
    
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]s",Arr);

    printf("Enter character: ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }

    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}

