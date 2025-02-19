/*************************************************************************************************/
//
// Function Name : DollarToINR
// Description : It is used to prform convert rupees into Dollar
// Author :      Shubham Sambhaji Mahind
// Date :        29/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

int DollarTOINR(int iNo)
{
    int iOneDollar = 70;
    iNo = iNo * iOneDollar;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = DollarTOINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}