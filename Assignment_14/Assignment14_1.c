//accept no. from user and display its Digitiplication of factors



#include<stdio.h>
#include<stdlib.h>

int FactorMultiplication(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorMultiplication(iValue);

    printf("Multiplication of factors is: %d", iRet);

    return EXIT_SUCCESS;
}

