#include<stdio.h>

int CountWhiteSpace(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        CountWhiteSpace(str);
    }

    return iCount;
}

int main()
{
    char arr[30];
    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    int iRet = CountWhiteSpace(arr);

    printf("%d\n",iRet);

    return 0;
}