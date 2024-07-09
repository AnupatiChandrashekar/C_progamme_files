#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l,cnt=0,cnt1=0,cnt2=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>=97&&str[i]<122)||(str[i]>=97&&str[i]<122))
        {
            cnt++;
        }
        else if(str[i]>=48&&str[i]<57)
        {
            cnt1++;
        }
        else
            cnt2++;
    }
    printf("alphabets %d digits %d special charecters %d",cnt,cnt1,cnt2);
}