#include <stdio.h>
#include <string.h>



void Reverse(char *str)
{
    char temp = '\0';
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }

    
    
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    printf("Reversed string is %s\n",arr);

    return 0;
}