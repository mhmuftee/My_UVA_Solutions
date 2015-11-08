#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

#define max 79800
map<string,int>index;

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
    int n,e,cas,u,v,i,j,k,weight;
    string a,b;
    while(scanf("%d %d",&n,&e)==2 && (n || e))
    {
        for(i=1; i<=n; i++)
        {
            cin>>a;
            index[a]=i;
        }
        for(i=0; i<e; i++)
        {
            cin>>a >>b>>weight;
            u=index[a];
            v=index[b];
            store[i].u=u;
            store[i].v=v;
            store[i].weight=weight;
        }
        cin>>a;

        sort(store,store+e,cmp);

        int minimum_cost=0;
        make(n);
        for(i=0,j=0; i<e; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;

            if(Union(u,v))
            {
                minimum_cost+=weight;
                j++;
            }

            if(j+1==n)
                break;
        }
        if(j+1==n)
            printf("%d\n",minimum_cost);
        else
            printf("Impossible\n");
    }
    return 0;
}
