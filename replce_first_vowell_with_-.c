#include<stdio.h>
#include<string.h>
char* vowelupper(char *str)
{
    int l=strlen(str),i,cnt=0;
    for(i=0;i<l;i++)
    {
        switch(str[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':str[i]='-';cnt++;
        }
        if(cnt==1)
            break;
    }
    return str;
}
int main()
{
    char str[100],*ptr=NULL;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    ptr=vowelupper(str);
    printf("string is:%s",ptr);
}