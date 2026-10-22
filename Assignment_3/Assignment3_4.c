//accept one character from user and convert case of that character

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{

    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c",cValue - 32);

    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c",cValue + 32);
    }
    else
    {
        printf("It is special symbol");
    }
}

int main()
{
    char cVal = 0;

    printf("Enter Character: ");
    scanf("%c",&cVal);

    DisplayConvert(cVal);

    return EXIT_SUCCESS;
}