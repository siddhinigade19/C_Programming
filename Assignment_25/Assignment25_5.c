
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplayExamTime(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM");
            return TRUE;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM");
            return TRUE;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM");
            return TRUE;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM");
            return TRUE;

        default:
            return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division: ");
    scanf(" %c",&cValue);

    bRet = DisplayExamTime(cValue);

    if(bRet == FALSE)
    {
        printf("Invalid Division");
    }

    return EXIT_SUCCESS;
}
