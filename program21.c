/*************************************************************************************************/
//
// Function Name : Pattern
// Description : It is used to print pattern($ * -> 5 times )
// Author :      Shubham Sambhaji Mahind
// Date :        27/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("$ ");
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}