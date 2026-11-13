
#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    if(iValue <= 0)
    {
        printf("Please enter a positive number");
    }
    else
    {
        FactRev(iValue);
    }

    return EXIT_SUCCESS;
}
