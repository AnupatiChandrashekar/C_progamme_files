#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
        printf("%d is perfect number\n",num);
    else
        printf("%d is not a perfect number\n",num);
}