#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }

}

int main()
{
    int iVAlue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iVAlue);

    Pattern(iVAlue);

    return 0;
}
