#include<stdio.h>

void  Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}