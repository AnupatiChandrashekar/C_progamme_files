#include<stdio.h>
int main()
{
    float Far=0,Cel=0;
    printf("Enter the Fahrenheit:");
    scanf("%f",&Far);
    Cel=(Far-32)*0.555556;
    printf("%f Farenheit equal to %f Celsius",Far,Cel);
}