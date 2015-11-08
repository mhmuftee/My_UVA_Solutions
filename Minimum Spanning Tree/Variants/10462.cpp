#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

#define max 101
int par[max];

struct node
{
    int u,v,weight;
} store[201];

bool cmp(node a,node b)
{
    if(a.weight<b.weight)
        return true;
    else
        return false;
}

int find(int n)
{
    if(par[n]!=n)
        par[n]=find(par[n]);
    return par[n];
}
bool Union(int a,int b)
{
    int u,v;
    u=find(a);
    v=find(b);
    if(u==v)
        return false;
    else
    {
        par[u]=v;
        return true;
    }
}
int main()
{
    int i,j,k,cas,node,edge,min_weight;
    scanf("%d",&cas);
    for(int X=1; X<=cas; X++)
    {
        scanf("%d %d",&node,&edge);
        for(i=0; i<edge; i++)
            scanf("%d %d %d",&store[i].u,&store[i].v,&store[i].weight);
        bool save[205]= {0};
        sort(store,store+edge,cmp);
        for(int I=1; I<=node; I++)
            par[I]=I;
        min_weight=0;
        for(i=0,j=0; i<edge; i++)
        {
            if(Union(store[i].u,store[i].v))
            {
                min_weight+=store[i].weight;
                save[i]=true;
                j++;
            }
            if(j+1==node)
                break;
        }
        if(j+1!=node)
        {
            printf("Case #%d : No way\n",X);
            continue;
        }
        int minimum_cost=10000;
        for(i=0; i<edge; i++)
        {
            if(save[i])
            {
                for(int I=1; I<=node; I++)
                    par[I]=I;
                min_weight=0;

                for(j=0,k=0; j<edge; j++)
                {

                    if(j!=i)
                        if(Union(store[j].u,store[j].v))
                        {
                            min_weight+=store[j].weight;
                            k++;
                        }
                    if(k+1==node)
                        break;
                }
                if(min_weight<minimum_cost && (k+1)==node)
                    minimum_cost=min_weight;
            }
        }
        if(minimum_cost==10000)
            printf("Case #%d : No second way\n",X);
        else
            printf("Case #%d : %d\n",X,minimum_cost);
    }
    return 0;
}

