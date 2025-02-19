#include <stdio.h>
#define ONEDOLLAR 70

int DollarToINR(int iNo)
{
    int INR = ONEDOLLAR * iNo;
    return INR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}