#include<stdio.h>
int isprime(int num)
{
    int i,cnt=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cnt++;
        }
    }
    if(cnt==0)
        return 1;
    else
        return 0;
}
int main()
{
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("prime factors of a number:");
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            if(isprime(i))
            {
                printf("%d ",i);
            }
        }
    }
}
