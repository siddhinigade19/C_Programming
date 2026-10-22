//accept no. from user and check whether no. is even or odd

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even: %d",iValue);

    }
    else
    {
        printf("Number is Odd: %d",iValue);
    }

    return EXIT_SUCCESS;
}