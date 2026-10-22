//Identify Character type

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }

    else if((cValue >= 'a') && (cValue <= 'z') )
    {
        printf("Lowercase Alphabet");
    }

    else if((cValue >= '0') && (cValue <= '9') )
    {
        printf("It is Digit");
    }

    else
    {
        printf("It is Special Character");
    }
    
}

int main()
{
    char cChar = '\0';

    printf("Enter a Character: ");
    scanf("%c",&cChar);

    CheckCharacterType(cChar);

    return EXIT_SUCCESS;
}