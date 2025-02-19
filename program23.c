/*************************************************************************************************/
//
// Function Name : Display
// Description : It is used to perform print number system
// Author :      Shubham Sambhaji Mahind
// Date :        27/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

void Display(int iNo)
{
    
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}