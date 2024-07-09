#include <stdio.h>
int main()
{
    int i,j,num1,num2,cnt;
    printf("Enter the number one: ");
    scanf("%d",&num1);
    printf("Enter the number two: ");
    scanf("%d",&num2);
    for(;num1<=num2;num1++)
    {
        int cnt=0;
        for(i=1;i<=num1;i++)
        {
            if(num1 %i == 0)
            {
                cnt++;
            }
        }
        if(cnt == 2)
        {
            printf("%d ",num1);
        }
    }
}