#include <stdio.h>
#include <string.h>
int main() {
    char str[100],ch;
    int i, l, j, cnt = 0;
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    l=strlen(str);
    for (i=0;i<l-1;i++) 
    {
        for(j=0;j<l-i-1;j++) 
        {
            if(str[j]<str[j+1])
            {
                ch=str[j+1];
                str[j+1]=str[j];
                str[j]=ch;
            }
        }
    }
    printf("string after sort: %s",str);
}