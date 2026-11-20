//accept the string from user and convert it into upper case

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter the string: ");
    scanf("%[^\n]s",arr);

    struprx(arr);

    printf("Modified string is: %s",arr);

    return EXIT_SUCCESS;
}