#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void *mystrcat(char *p1,char *p2)
{
        int i=0,j,l1;
        l1=strlen(p1);
        for(i=i+l1,j=0;p2[j];i++,j++)
        {
                p1[i]=p2[j];
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
        p=mystrcat(str1,str2);
        printf("%s\n",str1);
        printf("%lu\n",p);
}