/*
    Input : 5
    Output : A  B   C   D   E

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    char ch = '\0';

    int i = 0;
    ch = 'A';

    for(i = 1; i <= iNo; i++)
    
        
        {
            printf("%c\t",ch);
            ch++;
        }

        printf("\n");
    
}

int main()
{
    int iValue = 0;
    printf("Enter no. of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}