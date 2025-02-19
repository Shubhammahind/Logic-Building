#include  <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //write updater
    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d", &iValue);

    Display(iValue);

    return  0;
}