//accept one number from user & print the number of * on screen

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iNo >= iCnt)
    {
        printf("*\t");

        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}