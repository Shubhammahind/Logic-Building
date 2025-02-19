/*************************************************************************************************/
//
// Function Name : CountTwo
// Description : It is used to count frequenct of such a digit which are less than 6.
// Author :      Shubham Sambhaji Mahind
// Date :        1/11/2024
//
/*************************************************************************************************/


#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}