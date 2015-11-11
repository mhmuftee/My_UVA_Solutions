#include<cstdio>
#include<iostream>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
char maze[55][55];
int D[55][55];
bool s[55][55];
int node[55][55];
int par[10005];
pair <int ,int>u,v,start,end;
struct nod
{
    int u,v,weight;
} store[10005];

bool cmp(nod a,nod b)
{
    if(a.weight<b.weight)
        return true;
    else
        return false;
}
void mak(int n)
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
int bfs(int R,int C)
{
    queue<pair<int,int> > Q;
    Q.push(start);
    int m,n,x,y,i,j;
    D[start.first][start.second]=0;
    s[start.first][start.second]=true;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        m=u.first;
        n=u.second;

        for(i=0; i<4; i++)
        {
            x=m;
            y=n;
            if(i==0)x--;
            if(i==1)y--;
            if(i==2)x++;
            if(i==3)y++;
            if(x>=0 && y>=0 && x<R && y<C && maze[x][y]!='#')
            {
                v.first=x;
                v.second=y;
                if(!s[x][y])
                {
                    D[x][y]=D[m][n]+1;
                    s[x][y]=true;
                    Q.push(v);
                }
            }
        }

    }
}
void make(int R,int C)
{
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            s[i][j]=false,D[i][j]=0;
}
int main()
{
    int i,j,k,cas,m,n;
    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%d %d",&n,&m);
        getchar();
        for(k=0; k<m; k++)
            gets(maze[k]);
        int aix=0;
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                node[i][j]=++aix;

        make(m,n);

        int ix=0;
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(maze[i][j]=='S' || maze[i][j]=='A')
                {
                    make(m,n);
                    start.first=i,start.second=j;
                    bfs(m,n);
                    for(int ii=0; ii<m; ii++)
                        for(int jj=0; jj<n; jj++)
                            if((maze[ii][jj]=='A' || maze[ii][jj]=='S') && D[ii][jj])
                            {
                                store[ix].u=node[start.first][start.second];
                                store[ix].v=node[ii][jj];
                                store[ix].weight=D[ii][jj];
                                ix++;
                            }
                }
        sort(store,store+ix,cmp);
        int node=2555;
        int edge=ix,u,v,weight;
        int minimum_cost=0;
        mak(node);
        for(i=0,j=0; i<edge; i++)
        {
            u=store[i].u;
            v=store[i].v;
            weight=store[i].weight;

            if(Union(u,v))
            {
                minimum_cost+=weight;
                j++;
            }
        }
        printf("%d\n",minimum_cost);

    }

    return 0;
}
