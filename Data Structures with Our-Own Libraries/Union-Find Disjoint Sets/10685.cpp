#include<cstdio>
#include<algorithm>
#include<map>
#include<iostream>
#include<string>
using namespace std;
int par[30005];
map<string,int>index;
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
        par[u]=v;
}
bool cmp(int a,int b)
{
    if(a>b)
        return true;
    else
        return false;
}

int main()
{
    int cas,e,n,u,v;
    while(scanf("%d %d",&n,&e)==2 && (n || e)) {
        index.clear();
        int count[30005]= {0};
        make(n);
        string x,y;
        int c=n;

        while(c--)
        {
            cin>>x;
        }
        int b=0;
        while(e--)
        {
            cin>>x>>y;
            if(!index[x])
                index[x]=++b;
            if(!index[y])
                index[y]=++b;
            u=index[x];
            v=index[y];

            Union(v,u);
        }

        int max=0;
        for(int i=1; i<=n; i++)
            count[find(par[i])]++;
        sort(count,count+30000,cmp);
        printf("%d\n",count[0]);
    }
    return 0;
}

