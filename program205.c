#include<stdio.h>

void DisplayR(int iNo)
{
    static char i = 'a';
    if(i < 'a' + iNo)
    {
        printf("%c\t", i);
        i++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}