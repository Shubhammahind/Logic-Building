/*************************************************************************************************/
//
// Function Name : RangeDisplay
// Description : It is used to display number between range.
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include  <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range\n");
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}