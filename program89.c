#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 1)
        {
           iFact *= iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);


    return 0;
}