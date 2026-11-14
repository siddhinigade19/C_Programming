/*
    iRow = 4
    iCol = 4

    $   *   *   *
    *   $   *   *
    *   *   $   *
    *   *   *   $

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    


    for(i = 1; i <= iRow; i++)    //nested loop
    {
        

        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
               printf("$\t"); 
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
    
    int iValue1 = 0;   //for rows
    int iValue2 = 0;   // for columns

    printf("Enter Number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}