#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, l, j, cnt = 0;
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    l=strlen(str);
    printf("non-repeated elements are:");
    for (i=0;i<l;i++) 
    {
        cnt=0;
        for(j=0;j<l;j++) 
        {
            if(str[i]==str[j])
                cnt++;
        }
        if(cnt==1) 
            printf("%c ", str[i]);
    }
}