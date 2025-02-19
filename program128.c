#include <stdio.h>

void Display(char ch)
{
   if(ch >= 'A' && ch <= 'Z')
   {
        while(ch != 'Z' + 1)
        {
            printf("%c\t", ch);
            ch++;
        }
   }
   else if(ch >= 'a' && ch <= 'z')
   {
        for(char i = ch; i >= 'a'; i--)
        {
            printf("%c\t", ch);
            ch--;
        }
   }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}