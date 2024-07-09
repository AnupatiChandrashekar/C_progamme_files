#include<stdio.h>
int main()
{
    float Far=0,Cel=0;
    printf("Enter the Celsius:");
    scanf("%f",&Cel);
    Far=(1.8*Cel)+32;
    printf("%f Celsius equal to %f Farenheit",Cel,Far);
}