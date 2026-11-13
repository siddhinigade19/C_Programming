//accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>
#include<stdlib.h>

float percentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercent = 0.0f;

    fPercent = ((float)iObtainedMarks / iTotalMarks) * 100;

    return fPercent;
}

int main()
{
    int iTotal = 0, iObtained = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks: ");
    scanf("%d",&iTotal);

    printf("Enter obtained marks: ");
    scanf("%d",&iObtained);

    fRet = percentage(iTotal, iObtained);

    printf("Percentage is: %.2f",fRet);

    return EXIT_SUCCESS;
}