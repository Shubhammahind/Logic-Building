#include<stdio.h>

int small(char *str)
{
    static int iSmall = 0;
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
        small(str);
    }
    return iSmall;
}

int main()
{
    char arr[30];
    printf("Enter string : ");
    scanf("%s", arr);

    int iRet = small(arr);

    printf("%d\n",iRet);

    return 0;
}