#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }
    return iCount;
}

int main()
{
    
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    int iRet = Strlen(arr);

    printf("Length : %d\n", iRet);

    return 0;
}