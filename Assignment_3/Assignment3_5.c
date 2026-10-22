//accept one character from user and check whether character is vowel or not

#include<stdio.h>
#include<stdlib.h>

typedef int Bool;

#define TRUE 1
#define FALSE 0

Bool CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' ||cValue == 'u' || cValue == 'A' ||cValue == 'E' || cValue == 'I' ||cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cChar = 0;

    Bool bRet = FALSE;

    printf("Enter character: ");
    scanf("%c",&cChar);

    bRet = CheckVowel(cChar);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return EXIT_SUCCESS;


}