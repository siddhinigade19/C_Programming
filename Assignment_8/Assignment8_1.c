// accept no. from user and if no. is less than 50 then print small, if greater than 50 & less than 100 then print medium, if it is greater than 100 then print large

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is Small");
    }

    else if(iNo>= 50  && iNo <= 100)
    {
        printf("Number is Medium");
    }
    else
    {
        printf("Number is Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}