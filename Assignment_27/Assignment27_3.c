//accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int i = 0;
    int iSmall = 0;
    int iCapital = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <='z')
        {
            iSmall++;
        }

        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCapital++;
        }

        i++;
    }

    return (iSmall - iCapital);
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    printf("Difference btw capital and small letter: %d",iRet);

    return EXIT_SUCCESS;
}
