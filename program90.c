#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iOddFact = 1, iEvenFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            if(iCnt % 2 == 0)
            {
                iEvenFact *= iCnt;
            }
            else if(iCnt % 2 == 1)
            {
                iOddFact *= iCnt;
            }
        }
      
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d\n", iRet);


    return 0;
}