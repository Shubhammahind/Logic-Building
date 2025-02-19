#include<stdio.h>

void Display()
{
    static int i = 0;
    if(i < 5)
    {
        printf("%d\t", i + 1);
        i++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}