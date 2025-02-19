/*************************************************************************************************/
//
// Function Name : ChkZero
// Description : It is used to check whether number contains 0 in it or not.
// Author :      Shubham Sambhaji Mahind
// Date :        1/11/2024
//
/*************************************************************************************************/



#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}