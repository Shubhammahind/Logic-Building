#include <stdio.h>

void Display(char ch)
{
   printf("Decimal : %d\n", ch);
   printf("Hexadecimal : 0X%X\n", ch);
   printf("OCtal %o\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}