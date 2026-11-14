
/*
    INPUT : iRow = 4, iCol = 5

    OUTPUT :
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5
*/


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1
                ; j <= iCol; j++)
            {
                printf("%d\t", j * 2);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", (j * 2) - 1);
            }
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

