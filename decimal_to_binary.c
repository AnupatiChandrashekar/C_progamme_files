#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the number:\n");
    scanf("%d",&x);
    for(i=31;i>=0;i--)
    {
        printf("%d",(x>>i)&1);
    }
}