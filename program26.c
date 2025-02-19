/*************************************************************************************************/
//
// Function Name : Number
// Description : It is used to perform print small , medium, large depends on requirement
// Author :      Shubham Sambhaji Mahind
// Date :        27/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

void Number(int iNo)
{
    if(iNo < 50){
        printf("small\n");
    }else if(iNo > 50 && iNo < 100){
        printf("medium\n");
    }else if(iNo > 100)
    {
        printf("large\n");
    }
    
    
}

int main()
{
    int iValue = 0;
    printf("Enter  number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}