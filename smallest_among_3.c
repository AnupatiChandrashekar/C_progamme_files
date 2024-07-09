#include<stdio.h>
int smallest(int num,int num1,int num2)
{
    if(num<num1)
    {
        if(num<num2)
            return num;
        else
            return num2;
    }
    else
    {
        if(num1<num2)
            return num1;
        else
            return num2;
    }
}
int main()
{
    int num,num1,num2,x;
    printf("Enter the three numbers:\n");
    scanf("%d %d %d",&num,&num1,&num2);
    x=smallest(num,num1,num2);
    printf("%d is a smallest among three numbers",x);
}