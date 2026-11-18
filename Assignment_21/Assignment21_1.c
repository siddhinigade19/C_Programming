/*
    iRow = 4    iCol = 3

    *   *   *
    *   *   *
    *   *   *
    *   *   *

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter no. of rows: ");
    scanf("%d",&iValue1);

    printf("Enter no. of cols: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}