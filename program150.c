#include  <stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A' :
            printf("Your Exam at 7.00 AM");
            break;
        case 'a' :
            printf("Your Exam at 7.00 AM");
            break;
        
        case 'B' : 
            printf("Your Exam at 8.30 AM");
            break;
        case 'b' : 
            printf("Your Exam at 8.30 AM");
            break;
        
        case 'C' :
            printf("Your Exam at 9.20 AM");
            break;
        case 'c' :
            printf("Your Exam at 9.20 AM");
            break;
        
        case 'D' :
            printf("Your Exam at 10.30 AM");
            break;
        case 'd' :
            printf("Your Exam at 10.30 AM");
            break;
        default :
        {
            printf("You entered wrong choice\n");
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);    

    return 0;
}