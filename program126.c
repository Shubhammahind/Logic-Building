#include <stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("Dec\tHex\tOct\n");
    for(i = 0; i <= 255; i++)
    {
        
        printf("%d\t%X\t%o\n", i, i, i);
    }

}

int main()
{
    DisplayASCII();

    return 0;
}