// Accept temperature in Fahrenheit and convert it into celsius

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    float fahrenheit = 0.0;
    float celsius = 0.0;
    
    celsius = (fTemp - 32) *(5.0/9.0);

    return celsius;
}

int main()
{
    float fValue = 0.0;
    float dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %f",dRet);

    return EXIT_SUCCESS;
}