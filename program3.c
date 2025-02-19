#include <stdio.h>

void Display()
{
 
    int i = 1;
    while(i <= 5)
    {
        printf("%d", i - 6);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}