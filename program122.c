#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = iCol;
    if(iRow != iCol)
    {
        printf("Invalid input..");
        return ;
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i + j <= iRow)
            {
                printf("*\t");
            }
            else if(j == k)
            {
                printf("#\t");
                k--;
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}