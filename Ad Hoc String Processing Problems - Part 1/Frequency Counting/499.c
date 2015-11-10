#include<cstdio>
#include<cstring>
using namespace std;
int main() {
    int a[1200];
    int i,j,k,m,n,cas;

    char c[1000];

    while(gets(c))
    {
        int len=strlen(c);

        for(i=1; i<=122; i++)
            a[i]=0;

        for(i=0; i<len; i++)
        {
            ;
            a[c[i]]++;
        }

        int    max=-1;
        for(i=65; i<=90; i++)
            if(a[i]>=max)max=a[i];
        for(i=97; i<=122; i++)
            if(a[i]>=max)max=a[i];

        for(i=65; i<=122; i++)
            if(a[i]==max)
                printf("%c",i);
        printf(" %d\n",max);
    }
    return 0;
}
