#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    char str[100],ch,*ptr=NULL;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    printf("Enter the character:");
    __fpurge(stdin);
    scanf("%c",&ch);
    ptr=str;
    while(ptr=strchr(ptr,ch))
    {
        memmove(ptr,ptr+1,strlen(ptr+1)+1);
        ptr++;
    }
    printf("string is:%s",str);
}