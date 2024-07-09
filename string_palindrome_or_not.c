#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int cnt=0,i,l;
    printf("Enter the string1:");
    scanf("%[^\n]s",str);
    l=strlen(str)-1;
    for(i=0;i<l;i++,l--)
    {
        if(str[i]!=str[l])
        {
            cnt++;break;
        }
    }
    if(cnt==0)
        printf("given string palindrome");
    else
        printf("given string not palindrome");
}