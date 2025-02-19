#include <stdio.h>
#include  <string.h>

void StrRevX(char *str)
{
    int i = 0;
    char ch = '\0';
    int iStart = 0, iEnd  = strlen(str) - 1;
    
    while(iStart <= iEnd)
    {
        ch = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = ch;

        iStart++;
        iEnd--;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}