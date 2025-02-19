#include <stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0, index = -1;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            index = i;
        }
    }
    
    return index;
}

int main()
{
    char arr[20];
    char cValue= '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}