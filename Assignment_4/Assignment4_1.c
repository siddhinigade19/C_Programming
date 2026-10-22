//accept an integer from user and check whether number is positive, negative or zero

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("It is Positive number: %d",iNo);
    }
    else if(iNo < 0)
    {
        printf("It is Negative number: %d",iNo);
    }
    else
    {
        printf("It is Zero Number: %d",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}