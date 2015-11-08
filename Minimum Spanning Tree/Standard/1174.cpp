#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<iostream>
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
    int i,j,k,cas,node,edge,airport_weight,u,v,weight,newline=0;

    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {
        scanf("%d %d",&node,&edge);
        string uu,uv;
        int w,n=0;
        map<string,int>mymap;
        for(i=0; i<edge; i++) {
            cin>>uu>>uv>>w;
            if(!mymap[uu])mymap[uu]=++n;
            if(!mymap[uv])mymap[uv]=++n;

            store[i].u=mymap[uu];
            store[i].v=mymap[uv];
            store[i].weight=w;
        }

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
        if(newline)
            printf("\n");
        newline=1;
        printf("%d\n",minimum_cost);
    }
    return 0;
}

