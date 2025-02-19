#include <stdio.h>

int  SumNonFact(int iNo)
{
    int iCount = 0;
    int iCnt = 0;
    for(iCnt = 2; iCnt < iNo; iCnt++) // Time complexty -> O(N - 2)
    {
        if(iNo % iCnt != 0)
        {
            iCount = iCount + iCnt;
        }
    }
    return iCount;
}


int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter numbe : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);



    return 0;
}