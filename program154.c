#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    int i = 0 , j = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
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
    char arr[30] = "MARVELLOUS pythON 2";
    char brr[30];

    StrCpySmall(arr, brr);

    printf("%s", brr);    

    return 0;
}