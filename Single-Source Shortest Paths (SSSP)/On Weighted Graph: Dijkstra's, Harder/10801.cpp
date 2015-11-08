#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include<iostream>
#define INF 65000
#define MAX 505
#define pii pair< int, int >
#define pb(x) push_back(x)
using namespace std;

vector< pii > G[MAX];
int maze[105][6];
int w[6],node,n;
struct comp
{
    bool operator() (const pii &a, const pii &b)
    {
        return a.second > b.second;
    }
};

priority_queue< pii, vector< pii >, comp > Q;
void djkastra(int starting,int k)
{
    int D[MAX];
    bool F[MAX]= {0};
    for(int i=0; i<=node; i++) D[i] = INF;
    D[starting] = 0;
    Q.push(pii(starting, 0));
    while(!Q.empty())
    {
        int u = Q.top().first;

        Q.pop();
        if(F[u]) continue;
        int sz = G[u].size();

        for(int i=0; i<sz; i++)
        {
            int v = G[u][i].first;
            int w = G[u][i].second;
            if(!F[v] && D[u]+w < D[v])
            {

                D[v] = D[u] + w;
                Q.push(pii(v, D[v]));
            }
        }

        F[u] = 1;
    }
    int ans=INF;
    for(int j=1; j<=n; j++)
        if(maze[k][j])
        {
            if(D[maze[k][j]]<ans)
                ans=D[maze[k][j]];
        }

    if(ans==INF)
        printf("IMPOSSIBLE\n");
    else
        printf("%d\n",ans);

}

int main()
{
    int i,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        memset(maze,0,sizeof(maze));

        for(i=0; i<=MAX; i++)
            G[i].clear();

        node=0;
        for(i=1; i<=n; i++)
            scanf("%d",&w[i]);

        getchar();
        string s;
        for(i=1; i<=n; i++)
        {
            vector<int>vi;
            getline(cin,s);
            int u;
            stringstream ss(s);

            while(ss>>u)
            {
                maze[u][i]=++node;
                vi.pb(u);
            }

            u=vi[0];
            for(int ii=1; ii<vi.size(); ii++)
            {
                int v=vi[ii];
                int K=maze[u][i];
                int M=maze[v][i];
                int ww=abs(v-u)*w[i];

                G[K].pb(pii(M,ww));
                G[M].pb(pii(K,ww));
                u=v;
            }
        }

        for(i=0; i<=99; i++)
        {
            vector<int>vi;
            for(int j=1; j<=n; j++)
                if(maze[i][j])
                    vi.pb(maze[i][j]);

            int len=vi.size();

            if(len)
            {

                for(int K=0; K<len-1; K++)
                    for(int L=K+1; L<len; L++)
                    {
                        int a=vi[K];
                        int b=vi[L];
                        if(i)
                        {
                            G[a].push_back(pii(b,60));
                            G[b].push_back(pii(a,60));
                        }
                        else
                        {
                            G[a].push_back(pii(b,0));
                            G[b].push_back(pii(a,0));
                        }
                    }
            }
        }

        int src;
        for(int j=1; j<=n; j++)
            if(maze[0][j])
            {
                src=maze[0][j];
                break;
            }

        djkastra(src,k);
    }
    return 0;
}
