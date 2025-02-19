#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TURE 1
#define FALSE 0

bool ChkBit(UINT iNo, UINT iPos)
{
    int mask = 0x01;
    
    mask = (mask << (iPos - 1));

    int iResult = iNo & mask;
    
    if(iResult == 0)
    {   return false;   }
    else
    {   return true;    }
}

int main()
{
    int iValue = 0, iPos = 0;
    bool bRet = false;
    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter pos : ");
    scanf("%d", &iPos);

    bRet = ChkBit(iValue, iPos);

    if(bRet == true){
        printf("bit is ON\n");
    }
    else{
        printf("bit is OFF\n");
    }
    

    return 0;
}