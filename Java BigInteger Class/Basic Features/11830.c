#include<stdio.h>
#include<string.h>
int main() {

    char b[3],a[100000];

    long i,n,count,k;
    while(scanf("%s %s",&b,&a)==2)
    {   count=0;
        k=0;
        if(b[0]=='0' && strcmp(a,"0")==0)break;
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]!=b[0] && a[i]>'0') {
                k=i;
                break;
            }

        }

        for(i=k; i<strlen(a); i++)
        {
            if(a[i]==b[0] || a[i]=='0')count++;
        }

        if(count==strlen(a))printf("0\n");

        else
        {
            for(i=k; i<strlen(a); i++)
                if(a[i]!=b[0])printf("%c",a[i]);
            printf("\n");
        }
    }
    return 0;
}
