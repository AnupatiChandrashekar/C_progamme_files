#include<stdio.h>
int amstrong(int num)
{
    int num1=0,digit=0;
    while(num)
    {
        digit=num%10;
        num1=num1+(digit*digit*digit);
        num/=10;
    }
    return num1;
}
int main()
{
    int num,num1;
    printf("Enter the number:");
    scanf("%d",&num);
    num1=amstrong(num);
    if(num==num1)
    {
        printf("%d is an amstrong number",num);
    }
    else
    {
        printf("%d is not an amstrong number",num);
    }
}