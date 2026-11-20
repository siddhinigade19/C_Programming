//accept string from user and display it in reverse order
#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    for(i = i-1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%19s",arr);

    printf("Reverse string is: ");
    Reverse(arr);

    return 0;
}
