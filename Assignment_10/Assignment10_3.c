// accept distance in kilometer and convert it into meter

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int km = 0;
    int ans = 0;

    ans = iNo * 1000;

    return ans;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter: %d",iRet);

    return EXIT_SUCCESS;
}