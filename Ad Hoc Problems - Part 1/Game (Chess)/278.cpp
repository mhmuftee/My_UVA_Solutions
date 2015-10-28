#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int cas,r,c;
    char s[100],ss[10];
    sscanf(gets(s),"%d",&cas);

    while(cas--)
    {
        sscanf(gets(s),"%s %d %d",ss,&r,&c);

        if(ss[0]=='k')
            printf("%d\n",(r*c+1)/2);
        else if(ss[0]=='K')
            printf("%d\n",((r+1)/2)*((c+1)/2));
        else
            printf("%d\n",min(r,c));

    }

    return 0;
}
