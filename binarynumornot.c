#include<stdio.h>
int main()
{
    long int num,i,cnt=0,digit;
    printf("Enter the number:\n");
    scanf("%ld",&num);
    i=num;
    while(num)
    {
        digit=num%10;
        if(digit!=0&&digit!=1)
        {
            cnt++;
        }
        num/=10;
    }
    if(cnt==0)
    {
        printf("%ld is a binary number",i);
    }
    else
    {
        printf("%ld is a not binary number",i);
    }
}