/*************************************************************************************************/
//
// Function Name : CountTwo
// Description : It is used to perform count frequenct of 2 of a number.
// Author :      Shubham Sambhaji Mahind
// Date :        1/11/2024
//
/*************************************************************************************************/



#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}