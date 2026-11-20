//accept character from user and display its ASCII value in decimal, octal and hexadecimal format

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal value is: %d\n",ch);
    printf("Octal value is: %o\n",ch);
    printf("Hexadecimal value is: %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}