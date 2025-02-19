#include <stdio.h>

void FactorDecreasing(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo/2; iCnt >= 1; iCnt--)// Time complexity -> O(N/2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    FactorDecreasing(iValue);

    return 0;
}