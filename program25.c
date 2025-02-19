#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0, iProduct = 1;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iProduct = iNo * iCnt;
        printf("%d ", iProduct);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);


    return 0;
}