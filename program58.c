/*************************************************************************************************/
//
// Function Name : CountRange
// Description : It is used to count digit between 3 and 7.
// Author :      Shubham Sambhaji Mahind
// Date :        1/11/2024
//
/*************************************************************************************************/


#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}