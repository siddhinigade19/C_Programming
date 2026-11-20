//accept string from user and count number of capital characters

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int i = 0;
    int iCnt = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
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

    iRet = CountCapital(arr);

    printf("Count of Capital letter are: %d",iRet);

    return EXIT_SUCCESS;
}
