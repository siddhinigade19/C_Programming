//accept string from user and check whether it contains vowels in it or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
           str[i] == 'a' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            return TRUE;
        }

        i++;
       
    }
    return FALSE;
    
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return EXIT_SUCCESS;
}