//accept string from user and count number of white spaces from that string

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCount = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ' ')
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d",iRet);

    return EXIT_SUCCESS;
}

