//program to print 5 to 1 numbers on screen

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iNo = 0;
    iNo = 5;

    while(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
    } 
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}