/*************************************************************************************************/
//
// Function Name : RectArea
// Description : It is used to calculate Rectangle area 
// Author :      Shubham Sambhaji Mahind
// Date :        31/10/2024
//
/*************************************************************************************************/


#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0;
    Area = fWidth * fHeight;
    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of reactangle is %lf\n", dRet);

    return 0;
}