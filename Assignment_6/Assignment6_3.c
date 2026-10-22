// Calculate Shopping Discount

#include <stdio.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    if (fAmount < 0)
    {
        printf("Invalid amount");
    }
        
    else
    {
       if (fAmount < 1000)
    {
        fDiscount = 0;
    }
        
    else if (fAmount < 5000)
    {
        fDiscount = 10;
    }
        
    else
    {
        fDiscount = 20;
    } 

    }
    
        

    float fFinalAmount = fAmount - (fAmount * fDiscount / 100);

    printf("Payable Amount = %.2f", fFinalAmount);
}

int main()
{
    float fValue;

    printf("Enter purchase amount: ");
    scanf("%f", &fValue);

    
        CalculateDiscount(fValue);

    return 0;
}