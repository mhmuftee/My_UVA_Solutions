#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int i,len,count,cas;

    char a[10000],c,d;
    while(gets(a))
    {
        count=0;
        cas=0;
        if(a[0]=='*')break;
        c=tolower(a[0]);
        d=toupper(a[0]);
        len=strlen(a);
        for(i=0; i<len; i++)
            if(a[i]==' ')count++;
        for(i=0; i<len; i++)
            if(a[i]==' ')
                if(a[i+1]==d || a[i+1]==c)
                    cas++;

        if(count==cas)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
