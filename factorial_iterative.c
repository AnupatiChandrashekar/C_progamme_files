#include<stdio.h>
int factorial(int num)
{
    int i,sum=1;
    for(i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int main()
{
    int num,num2;
    printf("Enter the number:");
    scanf("%d",&num);
    num2=factorial(num);
    printf("%d factorial of number is %d\n",num,num2);
    
}