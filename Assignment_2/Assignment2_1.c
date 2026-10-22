//accept one number from user & print that number of * on screen

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while (iCnt <= iNo)
    {
        printf("*\t");

        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}