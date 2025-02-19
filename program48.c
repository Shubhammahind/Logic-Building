/*************************************************************************************************/
//
// Function Name : RangeSum
// Description : It is used to calculate sum of all numbers in between range 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0, iCnt = 0;
    
    if(iStart < 0 || iEnd < iStart)
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
    printf("Addition is %d\n", iRet);
    }

    return 0;
}