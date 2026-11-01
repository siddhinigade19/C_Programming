// Accept number from user and display its table in reverse order

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}