#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
      return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(iValue == 0)
    {
        printf("The number is Zero\n");
        return -1;
    }

    if(bRet == TRUE)
    {
        printf("%d is even\n", iValue);
    }
    else
    {
        printf("%d is odd\n", iValue);
    }




    return 0;
}