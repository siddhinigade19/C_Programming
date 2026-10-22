//Program to print 5 times "Marvellous" on screen

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iNo = 0;

    for(iNo = 1; iNo <= 5; iNo++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}