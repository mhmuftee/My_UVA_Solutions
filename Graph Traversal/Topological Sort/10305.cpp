#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>topsort;
vector<int>G[105];
int color[105];

void top_sort(int u)
{
    color[u]=1;

    for(int i=0; i<G[u].size(); i++)
        if(!color[G[u][i]])
            top_sort(G[u][i]);
    topsort.push_back(u);
}
int main()
{
    int node ,edge,u,v;
    while(scanf("%d %d",&node,&edge)==2 && node)
    {
        for(int i=0; i<=100; i++)
            G[i].clear(),color[i]=0;
        topsort.clear();

        for(int i=0; i<edge; i++)
        {
            scanf("%d %d",&u,&v);
            G[u].push_back(v);
        }

        for(int i=1; i<=node; i++)
            if(!color[i])
                top_sort(i);

        reverse(topsort.begin(),topsort.end());

        printf("%d",topsort[0]);
        for(int i=1; i<topsort.size(); i++)
            printf(" %d",topsort[i]);
        printf("\n");
    }
    return 0;
}
