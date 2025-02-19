#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;
    if(iNo > 0)
    {
        iFact *= iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    int iRet = Fact(iValue);

    printf("Factorial : %d\n", iRet);

    return 0;
}