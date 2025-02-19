/*************************************************************************************************/
//
// Function Name : KMToMeter
// Description : It is used to convert kilometer to meter 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>
#define ONEKM 1000

int KMtoMeter(int iNo)
{
    int Convert = 0;
    return Convert = ONEKM * iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Ans : %d meter", iRet);

    return 0;
}