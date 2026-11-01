// accept radius of circle and calculate its area

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float area = 0;
    float radius = 0;

    area = 3.14 * fRadius * fRadius;

    return area;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle : %f",dRet);

    return EXIT_SUCCESS;
}