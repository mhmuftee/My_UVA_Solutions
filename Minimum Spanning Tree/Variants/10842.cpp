#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define max 105
int par[max];

struct node
{
    int u,v,weight;
} store[10005];

bool cmp(node a,node b)
{
    if(a.weight>b.weight)
        return true;
    else
        return false;
}
void make(int n)
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
    int i,j,k,cas,node,edge,min_weight,u,v,weight,l=0;
    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {
        scanf("%d %d",&node,&edge);
        for(i=0; i<edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);

        sort(store,store+edge,cmp);
        make(node);
        min_weight=0;
        for(i=0,j=0; i<edge; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;
            if(Union(u,v))
            {
                min_weight=weight;
            }
        }
        printf("Case #%d: %d\n",k,min_weight);
    }
    return 0;
}


