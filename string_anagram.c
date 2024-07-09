#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
char* sort(char *str)
{
    int i,j,l;char ch;
    l=strlen(str);
    for (i=0;i<l-1;i++) 
    {
        for(j=0;j<l-i-1;j++) 
        {
            if(str[j]<str[j+1])
            {
                ch=str[j+1];
                str[j+1]=str[j];
                str[j]=ch;
            }
        }
    }
    return str;
}
int main()
{
    char str[50],str1[50],*ptr1,*ptr2;
    int cnt=0,l;
    printf("Enter the string1:");
    scanf("%[^\n]s",str);
    __fpurge(stdin);
    printf("Enter the string2:");
    scanf("%[^\n]s",str1);
    ptr1=sort(str);
    ptr2=sort(str1);
    if(strcmp(ptr1,ptr2)==0)
        printf("given string are anagram");
    else
        printf("given string are not anagram");
}