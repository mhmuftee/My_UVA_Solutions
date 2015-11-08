#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int graph[500][500];
int par[10005];
struct nod
{
    int u,v,weight;
} store[10005];

bool cmp(nod a,nod b)
{
    if(a.weight!=b.weight)
        return a.weight<b.weight;
    else
        return a.u<b.u;
}
void mak(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
int find(int n)
{
    if(par[n]!=n)
        par[n]=find(par[n]);
    return par[n];
}
int Union(int a,int b)
{
    int u,v;
    u=find(a);
    v=find(b);
    if(u==v)
        return 0;
    else
    {
        par[u]=v;
        return 1;
    }
}
int main()
{
    int i,j,k,cas,m;
    scanf("%d",&cas);

    for(int ii=1; ii<=cas; ii++)
    {
        scanf("%d",&m);

        for(i=0; i<m; i++)
            for(j=0; j<m; j++)
                scanf("%d,",&graph[i][j]);

        int edge=0;
        for(i=1; i<m; i++)
        {
            for(j=0; j<i; j++)
                if(graph[i][j])
                {
                    store[edge].u=j;
                    store[edge].v=i;
                    store[edge].weight=graph[i][j];
                    edge++;
                }
        }

        sort(store,store+edge,cmp);
        int node=m;
        int u,v,weight;
        int minimum_cost=0;
        mak(node);
        printf("Case %d:\n",ii);
        for(i=0,j=0; i<edge; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;

            if(Union(u,v))
            {
                minimum_cost+=weight;
                j++;
                printf("%c-%c %d\n",u+65,v+65,weight);
            }

            if(j+1==node)
                break;
        }
    }
    return 0;
}

