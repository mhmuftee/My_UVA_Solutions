#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define max 1000005
int par[max];
struct node
{
    int u,v,weight;
} store[max];

bool cmp(node a,node b)
{
    if(a.weight<b.weight)
        return true;
    else
        return false;
}
void make(int n)
{
    for(int i=1; i<=n; i++)
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
    while(scanf("%d",&node)==1)
    {
        min_weight=0;
        for(k=1; k<node; k++)
        {
            scanf("%d %d %d",&u,&v,&weight);
            min_weight+=weight;
        }
        scanf("%d",&edge);
        for(i=0; i<edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);
        scanf("%d",&cas);
        for(i=edge; i<cas+edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);
        edge+=cas;
        sort(store,store+edge,cmp);

        int minimum_cost=0;
        make(node);
        for(i=0,j=0; i<edge; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;

            if(Union(u,v))
            {
                minimum_cost+=weight;
                j++;
            }

            if(j+1==node)
                break;
        }

        if(l)
            printf("\n");
        printf("%d\n%d\n",min_weight,minimum_cost);
        l=1;
    }
    return 0;
}

