#include<stdio.h>
int fabanocci(int num)
{
    int i,fnum=0,snum=1,total;
    printf("%d ",fnum);
    printf("%d ",snum);
    for(i=2;i<num;i++)
    {
        total=fnum+snum;
        fnum=snum;
        snum=total;
        printf("%d ",total);
    }
}
int main()
{
    int num;
    printf("Enter the how many fabanacci numbers to be print:");
    scanf("%d",&num);
    fabanocci(num);
}