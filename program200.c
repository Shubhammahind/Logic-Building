#include<stdio.h>

void Display()
{
    static char i = 'a';
    if(i < 'a' + 6)
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