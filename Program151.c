#include<stdio.h>

void StrCpyRev(char *str1, char *str2)
{
    int i = 0, j= 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(i > 0)
    {
        str2[j++] = str1[i - 1];
        i--;
        
    }

    str2[j] = '\0';

}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}