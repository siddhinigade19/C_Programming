//accept two numbers from user & display first no. in second no. of times
// input : 12 5
//output: 12    12     12     12     12


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iVal = 0;

    iVal = 1;

    for (iVal = 1 ; iVal <= iFrequency; iVal++)
    {
        printf("%d\t",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}