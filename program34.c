/*************************************************************************************************/
//
// Function Name : OddFactorial
// Description : It is used to perform Odd factor upto N
// Author :      Shubham Sambhaji Mahind
// Date :        29/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)// // Time complexity :- O(n)
    {
        if(iCnt % 2 != 0)
        {
            iProduct = iCnt * iProduct;
        }
    }

    return  iProduct;

}

int main()
{
    int iVlaue = 0, iRet = 0;

    printf("Enter number  : ");
    scanf("%d", &iVlaue);

    iRet = OddFactorial(iVlaue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}