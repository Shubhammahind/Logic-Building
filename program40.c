/*************************************************************************************************/
//
// Function Name : Squaremeter
// Description : It is used to convert square feet to sqare meter 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>
#define ONE_SQ_FEET 0.0929

double  SquareMeter(int iNo)
{
    double Convert = 0.0;
   return Convert = iNo * ONE_SQ_FEET;
}

int main()
{
    int iVlaue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iVlaue);

    dRet = SquareMeter(iVlaue);

    printf("Ans : %lf square meter\n", dRet);

    return 0;
}