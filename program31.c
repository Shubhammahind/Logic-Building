/*************************************************************************************************/
//
// Function Name : Display
// Description : It is used to perform 5 times *# patteren
// Author :      Shubham Sambhaji Mahind
// Date :        29/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++) // Time complexity :- O(n2)
    {
        printf(" * ");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" # ");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}