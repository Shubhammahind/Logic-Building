/*************************************************************************************************/
//
// Function Name : OddDisplay
// Description : It is used to perform print Odd number upto N.
// Author :      Shubham Sambhaji Mahind
// Date :        27/10/2024
//
/*************************************************************************************************/



#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter  number : \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);


    return 0;
}