#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch,*ptr=NULL;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    ptr=str;
    while(ptr=strchr(ptr,' '))
    {
        memmove(ptr,ptr+1,strlen(ptr+1)+1);
        ptr++;
    }
    printf("string is:%s",str);
}