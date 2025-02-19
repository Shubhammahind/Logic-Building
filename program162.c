#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TURE 1
#define FALSE 0

int OffBit(UINT iNo)
{
    int mask = 0x240; 

    int Result = iNo & ~(mask);

    return Result;

}

int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = OffBit(iValue);

    printf("Ans : %d\n", bRet);
    

    return 0;
}