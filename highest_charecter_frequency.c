#include<stdio.h>
#include<string.h>
#include <stdio_ext.h>
int main()
{
    char str[100],ch,*ptr=NULL;
    int cnt=0,i,l,highest=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        ptr=str;
        cnt=0;
        while(ptr=strchr(ptr,str[i]))
        {
            cnt++;
            ptr++;
        }
        if(cnt>highest)
        {
            ch=str[i];
            highest=cnt;
        }
    }
    printf("%c is occured %d times in string",ch,highest);
}