//accept string from user and accept one character. return index of last occurrence of that character


#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iPos = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iPos = i;
        }

        i++;
    }

    return iPos;
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]",Arr);

    printf("Enter character: ");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    printf("Last occurrence index: %d",iRet);

    return EXIT_SUCCESS;
}
