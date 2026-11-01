// program to find Odd factorial of given number

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial is: %d\n", iRet);

    return EXIT_SUCCESS;

}