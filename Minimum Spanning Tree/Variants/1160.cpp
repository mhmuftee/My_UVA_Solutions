#include<cstdio>
using namespace std;
int par[100005];

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
    int a,b,total=0,connect=0;
    make(100000);
    while(scanf("%d",&a)==1)
    {
        if(a==-1)
        {
            make(100000);
            printf("%d\n",total-connect);
            total=connect=0;
        }
        else
        {
            scanf("%d",&b);
            total++;
            if(Union(a,b))connect++;
        }
    }
    return 0;
}
