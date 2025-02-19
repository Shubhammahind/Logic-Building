#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    int iCount = 0;
    int mask = 0x01;

    for(int i = 1; i <= 32; i++)
    {
        mask = 0x01;
        mask = mask << i - 1;
        int iResult = mask & iNo;
        if(iResult != 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CountOne(iValue);

    printf("Ans : %d\n", bRet);
    

}
