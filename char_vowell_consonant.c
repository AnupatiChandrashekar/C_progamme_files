#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int checkvowel(char ch)
{
    int cnt=0;
    switch(ch)
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
        printf("given charecter is Vowel");
    else
        printf("given charecter is consonant");
}