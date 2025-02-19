#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt1 = 0, iCnt2 = 0;
    
    for(iCnt1 = iStart; iCnt1 < iEnd; iCnt1++)
    {
        for(iCnt2 = 0; iCnt2 < iLength; iCnt2++)
        {
            if(Arr[iCnt2] == iCnt1)
            {
                printf("%d ", Arr[iCnt2]);
            }
        }
    }


}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter thr ending point : ");
    scanf("%d", &iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    Range(p,iSize,iValue1,iValue2);

    free(p);


    return 0;
}