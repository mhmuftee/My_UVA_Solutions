#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int par[1000005];

struct node
{
    int u,v,weight;
} store[1000005];

bool cmp(node a,node b)
{
    if(a.weight<b.weight)
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
    int i,j,k,u,v,weight,node,edge;
    while(scanf("%d %d",&node,&edge)==2)
    {
        if(!node && !edge)
            break;
        for(i=0; i<edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);

        sort(store,store+edge,cmp);

        int minimum_cost=0;
        int min=0;

        make(node);
        for(i=0,j=0; i<edge; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;
            if(Union(u,v))
            {
                minimum_cost+=weight;
                min=weight;
                j++;
            }

            if(j+1==node)
                break;
        }
        if(min && j+1==node)
            printf("%d\n",min);
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
