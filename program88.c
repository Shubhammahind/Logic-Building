#include <stdio.h>


int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            
            if(iCnt % 2 == 0)
            {
                iFact *= iCnt;
            }
            
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}