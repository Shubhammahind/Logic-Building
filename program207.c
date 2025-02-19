#include<stdio.h>

int Sum(int iNo)
{
    static int iSum  = 0;
    if(iNo >= 1)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        Sum(iNo);   
    } 
    return iSum;
}

int main()
{
    
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    int iRet = Sum(iValue);

    printf("Sum of Digit : %d\n", iRet);

    return 0;
}