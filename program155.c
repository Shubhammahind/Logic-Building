#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    int i = 0 , j = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            dest[j] = src[i] - 32;
        }
        else if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[j] = src[i] + 32;
        }
        else
        {
            dest[j] = src[i];
        } 

        i++;
        j++;  
    }
    
    dest[j] = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr, brr);

    printf("%s", brr);    

    return 0;
}