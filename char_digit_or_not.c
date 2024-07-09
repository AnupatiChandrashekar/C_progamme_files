#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int checkvowel(char ch)
{
    int cnt=0;
    if(ch>=48&&ch<=57)
        cnt++;
    return cnt;
}
int main()
{
    char ch;
    int cnt=0;
    printf("Enter the charecter:");
    __fpurge(stdin);
    scanf("%c",&ch);
    cnt=checkvowel(ch);
    if(cnt==1)
        printf("given charecter is digit");
    else
        printf("given charecter is not digit");
}