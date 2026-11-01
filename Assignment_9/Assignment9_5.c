//program which return the difference between even factorial and odd factorial of given number

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    // Calculate even factorial
    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    // Calculate odd factorial
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    // Calculate difference
    return iOddFact - iEvenFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even and odd factorial is: %d\n", iRet);

    return EXIT_SUCCESS;
}