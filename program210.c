#include<stdio.h>

int Mult(int iNo)
{
    static int iMul = 1;
    if(iNo > 0)
    {
        int iDigit = iNo % 10;
        iMul *= iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMul;
}

int main()
{
    
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    int iRet = Mult(iValue);

    printf("%d\n", iRet);

    return 0;
}