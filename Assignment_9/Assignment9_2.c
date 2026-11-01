// accept amount in US dollar and return its value in Indian currency. Consider 1$ as 70 rupees.

#include<stdio.h>
#include<stdlib.h>

int DollarINR(int iNo)
{
    int iRupees = 0;

    iRupees = iNo * 70;

    return iRupees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in Dollar: ");
    scanf("%d",&iValue);

    iRet = DollarINR(iValue);

    printf("Indian Currency is: %d Rupees",iRet);

    return EXIT_SUCCESS;
}