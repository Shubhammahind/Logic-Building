#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TURE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
    int mask = 0x1c0;

    int iResult = iNo & mask;
    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == true){
        printf("7th & 15th & 21 bit is ON\n");
    }
    else{
        printf("7th & 15th & 21 bit is OFF\n");
    }
    

    return 0;
}