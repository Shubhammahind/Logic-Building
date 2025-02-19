#include<stdio.h>

void Display()
{
    static char i = 'A';
    if(i < 'A' + 6)
    {
        printf("%c\t", i);
        i++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}