#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int i,j,len,lenb,s,d;
    char a[50000],b[50000];


    while(gets(a)) {

        len=strlen(a);
        lenb=0;
        if(len==4 && a[0]=='D' && a[1]=='O' && a[2]=='N' && a[3]=='E') break;
        for(i=0; i<len; i++)
            a[i]=tolower(a[i]);
        for(i=0; i<len; i++)
            if(a[i]>='a' && a[i]<='z')
            {
                b[lenb]=a[i];
                lenb++;
            }
        s=0;
        d=1;
        for(i=0; i<lenb/2; i++)
            if(b[i]==b[lenb-1-i])
                s++;
            else
                d=0;

        if(s==lenb/2) printf("You won't be eaten!\n");
        else printf ("Uh oh..\n");

    }

    return 0;
}

