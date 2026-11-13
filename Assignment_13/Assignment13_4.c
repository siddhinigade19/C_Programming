//accept no. from user and return multiplication of all digits


#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        iCnt = iCnt * iDigit;

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Count of Range nos.:%d",iRet);

    return EXIT_SUCCESS;
}