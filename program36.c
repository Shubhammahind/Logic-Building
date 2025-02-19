/*************************************************************************************************/
//
// Function Name : CircleArea
// Description : It is used to calculate circle area 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double Area = 0.0;
    Area = PI * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Radius of circle is %f\n", dRet);


    return 0;
}