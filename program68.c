#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL Flag = FALSE;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Flag = TRUE;
            break;
        }
    
    }
    return Flag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL iRet = FALSE;
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
    
    iRet = Check(p,iSize);

    if(iRet == TRUE)
    {
        printf("11 is present");
    }
    else{
        printf("11 is absent");
    }

   

    free(p);


    return 0;
}