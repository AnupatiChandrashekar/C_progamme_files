#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch, *ptr = NULL;
    int i, l, j, cnt = 0;
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    l=strlen(str);
    for (i=0;i<l;i++) 
    {
        cnt=0;
        for(j=0;j<l;j++) 
        {
            if(str[i]==str[j])
                cnt++;
        }
        if(cnt>1) 
        {
            ch=str[i];
            ptr=str;
            while ((ptr=strchr(ptr,ch))!=NULL)
            {
                memmove(ptr,ptr+1,strlen(ptr+1)+1);
                l--;
            }
        }
    }

    printf("String is: %s\n", str);
    return 0;
}