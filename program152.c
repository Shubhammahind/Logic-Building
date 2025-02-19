#include <stdio.h>
#include <string.h>

void StrCpyX(char *src, char *dest)
{
    int iLength = strlen(src), j = 0;
    for(int i = 0; i < iLength; i++)
    {
        if(src[i] != ' ')
        {
            dest[j++] = src[i];
        }
        
    }
    dest[j] = '\0';
}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s", brr);

    return 0;
}