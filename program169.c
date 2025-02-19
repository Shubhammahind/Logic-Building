#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TURE 1
#define FALSE 0

int OffBit(UINT iNo, UINT iPos)
{
    int mask = 0x01;
    
    mask = mask << (iPos - 1);

    int iResult = iNo ^ mask;

}

int main()
{
    int iValue = 0, iPos = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter pos : ");
    scanf("%d", &iPos);

    iRet = OffBit(iValue, iPos);

    printf("%d", iRet);

    return 0;
}