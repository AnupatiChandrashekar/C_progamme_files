#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    char str[100],ch,*ptr=NULL;
    int cnt=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    printf("Enter the character:");
    __fpurge(stdin);
    scanf("%c",&ch);
    ptr=str;
    while(ptr=strchr(ptr,ch))
    {
        cnt++;
        ptr++;
    }
    printf("%c is occured %d times in string",ch,cnt);
}