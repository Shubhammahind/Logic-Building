#include <stdio.h>

int FactDiff(int iNo)
{
    int CountFact = 0, CountNonFact = 0, Difference = 0;
    int iCnt1 = 0, iCnt2 = 0;
    //Loop Count Factor 
    for(iCnt1 = 1; iCnt1 <= iNo/2; iCnt1++)
    {
        if(iNo % iCnt1 == 0)
        {
            CountFact = CountFact + iCnt1;
          
        }
    }
  

    //Loop Count Non Factor
    for(iCnt2 = 2; iCnt2 < iNo; iCnt2++)
    {
        if(iNo % iCnt2 != 0)
        {
            CountNonFact = CountNonFact + iCnt2;
           
        }
    }
 
    Difference = CountFact - CountNonFact;

    return Difference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

