#include<stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1) 
    {
        return 1;
    }
    else 
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int num,num2;
    printf("Enter the number:");
    scanf("%d",&num);
    num2=factorial(num);
    printf("%d factorial of number is %d\n",num,num2);
    
}