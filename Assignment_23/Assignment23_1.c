//accept the string from user and convert it into the lower case

#include<stdio.h>
#include<stdlib.h>

void Strlwrx(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter String: ");
    scanf("%[^\n]s",Arr);

    Strlwrx(Arr);

    printf("Modified String is : %s",Arr);

    return EXIT_SUCCESS;

}