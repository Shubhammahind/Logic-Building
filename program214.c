#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    int iRet = Min(iValue);

    printf("%d\n",iRet);

    return 0;
}