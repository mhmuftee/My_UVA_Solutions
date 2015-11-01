#include<cstdio>
using namespace std;
int par[50005];
int find(int n)
{
    if(par[n]!=n)
        par[n]=find(par[n]);
    return par[n];
}
void make(int n)
{
    for(int i=1; i<=n; i++)
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
    int i,n,e,u,v,kas=1;
    while(scanf("%d %d",&n,&e)==2 && (n || e))
    {
        make(n);
        while(e--)
        {
            scanf("%d %d",&u,&v);
            Union(v,u);
        }

        int c=0;
        for(i=1; i<=n; i++)
            if(i==par[i])
                c++;
        printf("Case %d: %d\n",kas++,c);
    }
    return 0;
}
