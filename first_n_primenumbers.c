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
    int num,i,cnt=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("prime numbers:");
    for(i=2;cnt<num;i++)
    {
        if(isprime(i))
        {
            printf("%d ",i);
            cnt++;
        }
    }
}