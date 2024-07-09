#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter the number:\n");
    scanf("%d",&x);
    for(i=7;i>=0;i--)
    {
        printf("%d",(x>>(i*3))&7);
    }
}