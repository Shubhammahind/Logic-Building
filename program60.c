/*************************************************************************************************/
//
// Function Name : CountDiff
// Description : It is used to count difference between summation of even digits and odd digits.
// Author :      Shubham Sambhaji Mahind
// Date :        1/11/2024
//
/*************************************************************************************************/


#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenCount = 0, iOddCount = 0, iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenCount += iDigit;
        }
        else
        {
            iOddCount += iDigit;
        }
        iNo = iNo / 10;
    }

    iDiff = iEvenCount - iOddCount;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}