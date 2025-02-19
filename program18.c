#include <stdio.h>

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt < iNo; iCnt++) // Time complexty -> O(N - 1)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}


int main()
{

    int iValue = 0;
    printf("Enter numbe : \n");
    scanf("%d", &iValue);

    DisplayNonFactor(iValue);



    return 0;
}