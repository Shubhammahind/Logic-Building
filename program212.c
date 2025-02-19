#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    int iRet = Max(iValue);

    printf("%d\n",iRet);

    return 0;
}