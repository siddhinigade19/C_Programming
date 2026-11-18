/*
    iRow = 4
    iCol = 4

    *   *   *   #
    *   *   #   *
    *   #   *   *
    #   *   *   *

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(j = 1; j <= iCol; j++)
    {
        for(i = 1; i <= iRow; i++)
        
        {
            if(i + j == iCol + 1)
            {
               printf("#\t"); 
            }
            else
            {
                printf("*\t");
            }
            
        }


    printf("\n\n"); 
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter no. of rows: ");
    scanf("%d",&iValue1);

    printf("Enter no. of cols: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}