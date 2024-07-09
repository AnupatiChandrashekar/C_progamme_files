#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l,cnt=0,cnt1=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>=97&&str[i]<122)||(str[i]>=97&&str[i]<122))
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
                case 'u':cnt++;
            }
            cnt1++;

        }
    }
    cnt1=cnt1-cnt;
    printf("vowells %d consonants %d",cnt,cnt1);
}