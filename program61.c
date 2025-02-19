#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven += Arr[iCnt];
        }
        else if(Arr[iCnt] % 2 == 1)
        {
            iSumOdd += Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;
}


int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter numbers of elements");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memeory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt+1);
        scanf("%d", &p[iCnt]); // &(*(p + iCnt));
    }



    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}