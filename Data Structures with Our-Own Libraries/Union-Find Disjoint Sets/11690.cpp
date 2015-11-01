#include<cstdio>
#include<vector>
#include<set>
using namespace std;
int par [10010];
int money[10010];
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
    {   par[u]=v;
        money[v]+=money[u];
        money[u]=0;
    }
}
int main()
{
    int node,edge,Kas,a,b;

    scanf("%d",&Kas);

    while(Kas--)
    {
        scanf("%d %d",&node,&edge);
        make(node);
        for(int i=0; i<node; i++)
            scanf("%d",&a),money[i]=a;
        for(int i=0; i<edge; i++)
        {
            scanf("%d %d",&a,&b);
            Union(a,b);
        }
        int okay=1;
        for(int i=0; i<node; i++)
            if(money[i]) okay=0;

        if(okay)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
