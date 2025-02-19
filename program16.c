#include <stdio.h>

int DisplayMulFactor(int iNo)
{
    int iproduct = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++) // Time complexity -> O(N/2)
    {
        if(iNo % iCnt == 0)
        {
            iproduct = iproduct * iCnt;
        }
    }

    return iproduct;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = DisplayMulFactor(iValue);

    printf("Product factor of value %d is %d", iValue ,iRet);


    return 0;
}