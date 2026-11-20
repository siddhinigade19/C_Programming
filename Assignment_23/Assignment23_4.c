//accept string from user and display the digits from that string

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c\t",str[i]);
        }

        i++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}

