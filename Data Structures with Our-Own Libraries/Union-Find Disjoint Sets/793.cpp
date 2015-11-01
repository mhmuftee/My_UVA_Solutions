#include<cstdio>
using namespace std;
int par[1000];
int find(int n)
{
    if(par[n]!=n)
        par[n]=find(par[n]);
    return par[n];
}
void make(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
void Union(int a,int b)
{
    int u,v;
    u=find(a);
    v=find(b);
    if(u!=v)
        par[u]=v;
}


int main()
{
    int cas,n,newline=0;
    int u,v,y=0,no=0;
    char c[10];
    scanf("%d",&cas);
    while(cas--)
    {
        if(newline)
            printf("\n");
        newline=1;
        scanf("%d",&n);
        getchar();
        make(n);
        y=no=0;
        while(gets(c)) {

            char ch;
            if(c[0]=='\0')
                break;
            sscanf(c,"%c %d %d",&ch,&u,&v);
            if(ch=='c')
            {
                Union(v,u);
            }
            else
            {
                if(find(u)==find(v))
                    y++;
                else
                    no++;
            }
        }
        printf("%d,%d\n",y,no);
    }
    return 0;
}
