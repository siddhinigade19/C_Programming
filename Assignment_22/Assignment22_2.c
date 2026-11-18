/*
    INPUT : 5
    OUTPUT : 5  #   4   #   3   #   2   #   1

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    int j = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t #\t",i);

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}