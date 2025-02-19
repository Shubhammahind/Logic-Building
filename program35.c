/*************************************************************************************************/
//
// Function Name : FactorialDiff
// Description : It is used to perform even factor and Odd factor difference
// Author :      Shubham Sambhaji Mahind
// Date :        29/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)  // Time complexity :- O(n)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return  iEvenFact - iOddFact;

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is  %d", iRet);

    
    return 0;
}