#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>=97&&str[i]<122)
            str[i]=str[i]-32;
    }
    printf("string is:%s",str);
}