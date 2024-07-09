#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,out;
    printf("Enter the numbers:\n");
    scanf("%d %d",&x,&y);
    out=pow(x,y);
    printf("%d ",out);
}