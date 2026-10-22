//program which accept one no. from user and print that no. of even numbers on screen

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}