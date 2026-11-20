/*accept string from user reverse that string in place

    Input : "abcd"
    Output : "dcba"

    Input : "abba"
    Output : "abba"
*/

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int i = 0;
    int j = 0;
    char temp = '\0';

    while(str[j] != '\0')
    {
        j++;
    }

    j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s",Arr);

    StrRevX(Arr);

    printf("Modified string: %s",Arr);

    return EXIT_SUCCESS;
}