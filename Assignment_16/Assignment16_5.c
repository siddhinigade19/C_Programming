
/*
    INPUT : iRow = 3, iCol = 4

    OUTPUT :
    1   2   3   4
    5   6   7   8
    9   10  11  12
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo++;
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
