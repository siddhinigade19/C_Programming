/*
    PATTERN:

    OUTPUT:  
    *   *   *   *
    *   *   *
    *   *
    *
    
    
   

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = iRow; j >= i; j--)
        {
            printf("*\t");
        }

    printf("\n");   
     
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}