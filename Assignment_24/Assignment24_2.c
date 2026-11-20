//accept the string from user and accept one character. Return frequency of that character

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int i = 0;
    int iCount = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCount++;
        }

        i++;
    }

    return iCount;
    
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s",arr);

    printf("Enter character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequncy is: %d",iRet);

    return EXIT_SUCCESS;
}