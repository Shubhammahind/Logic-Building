/*************************************************************************************************/
//
// Function Name : FhtoCs
// Description : It is used to convert fahrenheit to celsius 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

double FhtoCs(float fTemp)
{
    double Convert = 0.0;
    Convert = (fTemp - 32) * (5.0/9.0);
    return Convert;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Ans : %lf celsius", dRet);

    return 0;
}