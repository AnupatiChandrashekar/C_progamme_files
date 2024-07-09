#include <stdio.h>
int main()
{
    int num,num1=0,digit=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num)
    {
        digit=num%10;
        num1=(num1*10)+digit;
        num/=10;
    }
    printf("%d\n",num1);
    return 0;
}