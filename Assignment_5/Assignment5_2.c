//check leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || (iYear % 4 == 0) ^ (iYear % 100 == 0))
    {
        printf("It is Leap year :%d",iYear);
    }
    else
    {
        printf("It is not leap year : %d",iYear);
    }
}

int main()
{
    int iLeap = 0;

    printf("Enter year: ");
    scanf("%d",&iLeap);

    CheckLeapYear(iLeap);

    return EXIT_SUCCESS;
}