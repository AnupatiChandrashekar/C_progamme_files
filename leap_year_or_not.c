#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter the year:\n");
    scanf("%d",&x);
    if((x%400==0)||((x%100!=0) && (x%4==0)))
    {
        printf("%d is a leep year",x);
    }
    else
    {
        printf("%d is not leep year",x);
    }
}