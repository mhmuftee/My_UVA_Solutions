#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
#define max 25005

int par[1005];

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
    int  i,node,edge;
    while(scanf("%d %d",&node,&edge)==2 &&(node || edge))
    {
        for( i=0; i<edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);
        vector<int>wei;
        sort(store,store+edge,cmp);
        make(node);
        for(i=0; i<edge; i++)
        {
            if(!Union(store[i].u,store[i].v))
                wei.push_back(store[i].weight);
        }
        if(!wei.size())
            printf("forest\n");
        else
        {
            printf("%d",wei[0]);
            for(i=1; i<wei.size(); i++)
                printf(" %d",wei[i]);
            printf("\n");
        }
    }
    return 0;
}
