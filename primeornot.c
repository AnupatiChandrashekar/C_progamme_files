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
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    isprime(num);
    if(isprime(num))
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}