/*************************************************************************************************/
//
// Function Name : TableRev
// Description : It is used to print reverse table
// Author :      Shubham Sambhaji Mahind
// Date :        28/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iProduct = iNo * iCnt;
        printf("%d ", iProduct);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}