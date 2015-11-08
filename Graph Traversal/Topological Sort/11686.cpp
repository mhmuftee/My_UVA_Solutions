#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>topsort;
vector<int>G[1000005];
int color[1000005],DAG;

void top_sort(int u)
{
    color[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        if(color[G[u][i]]==0)
            top_sort(G[u][i]);
        else if(color[G[u][i]]==1)
            DAG=0;
    }
    color[u]=2;
    topsort.push_back(u);
}
int main()
{
    int node ,edge,u,v;
    while(scanf("%d %d",&node,&edge)==2 && node)
    {
        for(int i=0; i<=1000000; i++)
            G[i].clear(),color[i]=0;
        topsort.clear();

        for(int i=0; i<edge; i++)
        {
            scanf("%d %d",&u,&v);
            G[u].push_back(v);
        }
        DAG=1;
        for(int i=1; i<=node; i++)
            if(!color[i])
                top_sort(i);

        reverse(topsort.begin(),topsort.end());

        if(DAG)
            for(int i=0; i<topsort.size(); i++)
                printf("%d\n",topsort[i]);
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}

