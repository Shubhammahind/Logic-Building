#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt1 = 0, iSumEven = 0, iSumOdd = 0;
    
    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        if(Arr[iCnt1] % 2 == 0)
        {
            iSumEven++;
        }
        else if(Arr[iCnt1] % 2 == 1)
        {
            iSumOdd++;
        }
    
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = Frequency(p,iSize);

    printf("Relsult : %d", iRet);

    free(p);


    return 0;
}