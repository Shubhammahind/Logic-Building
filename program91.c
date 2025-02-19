#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char A = 'a';
    for(iCnt = 65; iCnt < iNo + 65; iCnt++)
    {
        printf("%c\t", iCnt);
    }
    printf("\n");

}

int main()
{
    int iVAlue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iVAlue);

    Pattern(iVAlue);

    return 0;
}
