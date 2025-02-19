#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountEven(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL iFlag = FALSE;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFlag = TRUE;
            break;;
        }
    
    }
    return iFlag;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    iRet = CountEven(p,iSize,iValue);

    if(iRet == TRUE)
    {
        printf("Number  is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);


    return 0;
}