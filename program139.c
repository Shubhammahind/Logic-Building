#include <stdio.h>

void strlwrx(char *str)
{
    int i = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    return 0;
}