// accept name from user and print the name

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[30];

    printf("Enter Full Name: ");
    scanf("%[^\n]s",name);

    printf("Your name is: %s",name);

    return EXIT_SUCCESS;
}