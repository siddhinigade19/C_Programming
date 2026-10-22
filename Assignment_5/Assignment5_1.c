//accept 3 nos. and determine the greatest no. among them

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst >iSecond ) && (iFirst > iThird))
    {
        printf("It is Greatest number : %d",iFirst);
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("It is Greatest number : %d",iSecond);
    }
    else
    {
        printf("It is Greatest number : %d",iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
