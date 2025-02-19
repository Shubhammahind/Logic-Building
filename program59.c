/*************************************************************************************************/
//
// Function Name : MultiDigits
// Description : It is used to perform a multplication of all digits.
// Author :      Shubham Sambhaji Mahind
// Date :        1/11/2024
//
/*************************************************************************************************/


#include <stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0, iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iNo = iNo / 10; // Remove zero. - >update to the next didgit
        }
        else
        {
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("%d", iRet);

    return 0;
}