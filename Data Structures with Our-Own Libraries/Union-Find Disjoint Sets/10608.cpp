#include<cstdio>
#include<algorithm>
using namespace std;
int par[30005];
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
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d %d",&n,&e);
        int count[30005]= {0};
        make(n);
        int c=0;


        while(e--)
        {
            scanf("%d %d",&u,&v);


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
