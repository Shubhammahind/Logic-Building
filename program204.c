#include<stdio.h>

void DisplayR(int iNo)
{
    static char i = 'A';
    if(i < 'A' + iNo)
    {
        printf("%c\n", i);
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