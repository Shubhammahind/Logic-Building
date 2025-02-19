#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iMask1 = 0x01;
    int iResult1 = 0;
    int iResult2 = 0;

    for(int i = 1; i <= 32; i++)
    {
        iMask1 = 0x01;
        
        iMask1 = iMask1 << (i - 1);


        iResult1 = iNo1 & iMask1;
        iResult2 = iNo2 & iMask1;

        if(iResult1 != 0 && iResult2 != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number1 : ");
    scanf("%d", &iValue1);

    printf("Enter number2 : ");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}
