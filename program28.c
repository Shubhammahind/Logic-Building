/*************************************************************************************************/
//
// Function Name : Factorial
// Description : It is used to prform factorial 
// Author :      Shubham Sambhaji Mahind
// Date :        28/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iProduct = iProduct * iCnt;
    }

    return iProduct;
}

int main()
{
    int iVlaue = 0, iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &iVlaue);

    iRet = Factorial(iVlaue);

    printf("Factorial of number is %d", iRet);


    return 0;
}