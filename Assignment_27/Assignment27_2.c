//accept string from user and count number of small characters

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int i = 0;
    int iCnt = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s",arr);

    iRet = CountSmall(arr);

    printf("Count of small character: %d",iRet);

    return EXIT_SUCCESS;
}