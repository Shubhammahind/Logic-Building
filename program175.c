#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    int mask = 0x01;
   
    for(int i = iStart; i <= iEnd; i++)
    {
        mask = 0x01;
        mask = mask << i - 1;
        iNo = mask ^ iNo;
    }
    return iNo;
}

int main()
{
    int iValue = 0, iS = 0, iE = 0;
    UINT bRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter the range : ");
    scanf("%d %d", &iS, &iE);

    bRet = ToggleBitRange(iValue, iS, iE);

    printf("Ans : %d\n", bRet);
    

}
