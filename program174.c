#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TURE 1
#define FALSE 0

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    int mask1 = 0x01, mask2 = 0x01;
    
    mask1 = mask1 << (iPos1 - 1);
    mask2 = mask2 << (iPos2 - 1);

    int iResult1 = iNo & mask1;
    int iResult2 = iNo & mask2;
    
    if(iResult1 == 0 || iResult2 == 0)
    {   return false;   }
    else
    {   return true;    }
}

int main()
{
    int iValue = 0, iPos1 = 0, iPos2 = 0;
    bool bRet = false;
    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter 2 position that you want check on or off: ");
    scanf("%d %d", &iPos1, &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == true){
        printf("%dth and %dth bit is ON\n", iPos1, iPos2);
    }
    else{
        printf("%dth and %dth bit is OFF\n", iPos1, iPos2);
    }
    

    return 0;
}