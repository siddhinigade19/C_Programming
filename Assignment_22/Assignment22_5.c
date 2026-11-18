/*
    INPUT : 8
    OUTPUT : 2  4   6   8   10  12  14  16   

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
       
        printf("%d\t",i * 2);
        
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