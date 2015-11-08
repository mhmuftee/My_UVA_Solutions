#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
vector<int>G[2505];

void bfs(int n,int source)
{
    vector<int>V1,V2;
    int lev,count=0,max=0;
    V1.push_back(source);
    int taken[2505]= {0};
    taken[source]=1;
    for(int loop=1; loop<n; loop++)
    {
        for(int i=0; i<V1.size(); i++)
        {
            int u=V1[i];
            for(int j=0; j<G[u].size(); j++)
            {
                int v=G[u][j];
                if(!taken[v])
                {
                    taken[v]=1;
                    V2.push_back(v);
                }
            }
        }
        if(V2.empty())
            break;
        else
        {
            if(V2.size()>max)
            {
                max=V2.size();
                lev=loop;
            }

            V1.clear();
            V1=V2;
            V2.clear();
        }
    }
    printf("%d %d\n",max,lev);
}

int main()
{
    int i,j,E,N,T;
    while(scanf("%d",&E)==1)
    {
        for(i=0; i<=2500; i++)
            G[i].clear();
        for(i=0; i<E; i++)
        {
            scanf("%d",&T);
            while(T--)
            {
                scanf("%d",&N);
                G[i].push_back(N);
            }
        }
        scanf("%d",&N);
        while(N--)
        {
            scanf("%d",&T);
            if(G[T].empty())
                printf("0\n");
            else
                bfs(E,T);
        }
    }
    return 0;
}
