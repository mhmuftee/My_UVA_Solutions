#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
int par[200010];
map<string,int>index;
int size[200010];
int find(int n)
{
    if(par[n]!=n)
        par[n]=find(par[n]);
    return par[n];
}
void make(int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i,size[i]=1;
}
void Union(int a,int b)
{
    int u,v;
    u=find(a);
    v=find(b);
    if(u!=v)
    {
        par[v]=u;
        size[u]+=size[v];
    }
}
int main()
{

    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        int tt;
        scanf("%d",&tt);
        make(200000);
        string a,b;
        int n=0;
        index.clear();
        while(tt--)
        {
            cin>>a>>b;
            if(!index[a])
                index[a]=++n;
            if(!index[b])
                index[b]=++n;

            Union(index[a],index[b]);

            printf("%d\n",size[find(index[a])]);
        }
    }
    return 0;
}
