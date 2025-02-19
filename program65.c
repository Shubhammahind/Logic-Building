#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt1 = 0;
    printf("Output : ");
    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        if(Arr[iCnt1] % 11 == 0)
        {
            printf("%d ",Arr[iCnt1]);
        }
    
    }
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

    printf("Enter %d elements", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    Display(p,iSize);

    free(p);


    return 0;
}