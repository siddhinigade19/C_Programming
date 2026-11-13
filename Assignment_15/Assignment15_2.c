//accept one no. from user and check whether no is greater than 100 or not

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    int iN0 = 0;

    if(iNo >= 100)
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

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(iValue > 100)
    {
        printf("Greater");
    }

    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}