#include<stdio.h>
int main()
{
    int i,p,t,r;
    printf("Enter the principal amount:");
    scanf("%d",&p);
    printf("Enter the time period:");
    scanf("%d",&t);
    printf("Enter the rate of intrest(annum):");
    scanf("%d",&r);
    i=(p*t*r)/100;
    printf("simple intrest is %d",i);
}