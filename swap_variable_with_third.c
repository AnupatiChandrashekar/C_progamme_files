#include<stdio.h>
int main() 
{
    int num,num1,num2;
    printf("Enter a numbers:");
    scanf("%d %d",&num,&num1);
    printf("before swapping a=%d and b=%d\n",num,num1);
    num2=num1;
    num1=num;
    num=num2;
    printf("before swapping a=%d and b=%d\n",num,num1);

    return 0;
}