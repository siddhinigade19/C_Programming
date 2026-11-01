// accept width & height of rectangle from user and calculate its area

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    float Width = 0.0;
    float Height = 0.0;
    float fArea = 0.0;

    fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle: %f",dRet);

    return EXIT_SUCCESS;
}