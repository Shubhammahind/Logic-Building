/*************************************************************************************************/
//
// Function Name : RangeDisplayRev
// Description : It is used to perform a display number in reverse order beteween range 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid input");
    }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}