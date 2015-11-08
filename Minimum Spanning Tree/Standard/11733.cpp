#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int par[10005];

struct node
{
    int u,v,weight;
} store[100005];

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
    int i,j,k,cas,node,edge,airport_weight,u,v,weight;
    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {
        scanf("%d %d %d",&node,&edge,&airport_weight);
        for(i=0; i<edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);

        sort(store,store+edge,cmp);
        int minimum_cost=0;
        make(node);
        for(i=0,j=0; i<edge; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;
            if(weight<airport_weight)
            {
                if(Union(u,v))
                {
                    minimum_cost+=weight;
                    j++;
                }
            }
            if(j+1==node)
                break;
        }
        for(i=1,j=0; i<=node; i++)
            if(i==par[i])
                j++;
        minimum_cost+=j*airport_weight;
        printf("Case #%d: %d %d\n",k,minimum_cost,j);
    }
    return 0;
}
