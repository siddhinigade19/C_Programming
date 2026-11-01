// accept area in square feet and convert into square meter

// Accept area in square feet and convert into square meter

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSquareMeter = 0.0;

    dSquareMeter = iValue * 0.0929;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet to square meter is: %f\n", dRet);

    return EXIT_SUCCESS;
}
