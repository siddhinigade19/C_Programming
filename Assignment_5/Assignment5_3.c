//calculate student grade

#include<stdio.h>
#include<stdlib.h>
void DisplayGrade(float fmarks)
{
    if( (fmarks <= 0 ) || (fmarks > 100))
    {
        printf("Invalid Marks");
    }
    
    else
    {
        
        if((fmarks >= 90)  && (fmarks <= 100))
    {
        printf("Grade A");
    }
     
    else if((fmarks >= 75)  && (fmarks <= 89))
    {
        printf("Grade B");
    }

    else if((fmarks >= 60)  && (fmarks <= 74))
    {
        printf("Grade C");
    }

    else if((fmarks >= 60)  && (fmarks <= 74))
    {
        printf("Grade C");
    }

    else if((fmarks >= 60)  && (fmarks <= 74))
    {
        printf("Grade C");
    }

    else if((fmarks >= 49)  && (fmarks <= 59))
    {
        printf("Grade D");
    }

    else if (fmarks <40)
    {
        printf("Fail");
    }

    }
  
    
}

int main()
{
    float fGrade = 0.0f;

    printf("Enter marks: ");

    scanf("%f",&fGrade);

    DisplayGrade(fGrade);

    return EXIT_SUCCESS;
}