#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d * ", iNo);
        Display(iNo - 1);
    } 
    
}

int main()
{
    
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}