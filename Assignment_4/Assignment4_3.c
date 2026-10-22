//accept two integer and determine which no. is greater

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("Greater number is: %d", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("Greater number is: %d", iSecond);
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two number: ");
    scanf("%d %d",&iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;


}