#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void *mystrcpy(char *p1,char *p2)
{
        int i;
        for(i=0;p2[i];i++)
        {
                p1[i]=p2[i];
        }
        p1[i]='\0';
        return p1;
}
int main()
{
        int l,i;
        char str1[30],str2[30],ch[30],*p;
        scanf("%[^\n]s",str1);
        __fpurge(stdin);
        scanf("%[^\n]s",str2);
        l=strlen(str2);
        p=mystrcpy(str1,str2);
        printf("%s\n",str1);
}