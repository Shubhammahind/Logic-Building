#include<stdio.h>

int Reverse(int iNo)
{   
    static int iRev = 0;
    if(iNo != 0)
    {
        int Digit = iNo % 10;
        iNo = iNo / 10;
        iRev = iRev * 10 + Digit;
        Reverse(iNo);
    }
    return iRev;
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    int iRet = Reverse(iValue);

    printf("%d\n",iRet);

    return 0;
}