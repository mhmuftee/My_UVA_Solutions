#include<stdio.h>
#include<string.h>

int main(){

    char s[6];
    int n,len;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);

        len=strlen(s);
        if(len==5)
        printf("3\n");
        if(len==3)
        {
            if((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e'))
            printf("1\n");
            else
            printf("2\n");
        }
    }

    return 0;}
