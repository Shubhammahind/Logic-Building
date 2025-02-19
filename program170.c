#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TURE 1
#define FALSE 0

UINT ToggleBit(UINT iNo)
{
    int mask = 0x01;
    
    for(int i = 1; i <= 4; i++)
    {
        mask = 0x01;
        mask = mask << (i - 1);
        iNo = iNo ^ mask;
    }

    for(int i = 29; i <= 4; i++)
    {
        mask = 0x01;
        mask = mask << (i - 1);
        iNo = iNo ^ mask;
    }

    return iNo;
}

int main()
{
    int iValue = 0;
    UINT iRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("%d", iRet);

    return 0;
}