#include<stdio.h>
int power(int x,int y)
{
    int a=0;
    a=x;
    for(int i=1;i<y;i++)
    {
        x=x*a;
    }
    return x;
}
int main()
{
    int x,y,out;
    printf("Enter the numbers:\n");
    scanf("%d %d",&x,&y);
    out=power(x,y);
    printf("%d ",out);
}