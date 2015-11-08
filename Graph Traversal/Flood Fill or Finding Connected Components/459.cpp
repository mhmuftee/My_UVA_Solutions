#include<cstdio>
#include<queue>
#include<vector>
#include<iostream>
#include<cstring>
#define max 30
using namespace std;

vector <int> Graph[max];
void bfs(int n)
{
    int i,j,co=0,color[max+1]= {0},u,v;
    queue < int > Q;
    for(i=1; i<=n; i++)
    {
        if(!color[i])
        {
            co++;
            Q.push(i);
            color[i]=1;
        }
        while(!Q.empty())
        {
            u=Q.front();
            int b=Graph[u].size();
            for( j=0; j<b; j++)
            {
                v=Graph[u][j];
                if(!color[v])
                {
                    color[v]=1;
                    Q.push(v);
                }
            }
            Q.pop();
        }
    }
    printf("%d\n",co);
}
int main()
{
    int i,k=0,cas,m,n,node,len;
    char x[4];
    scanf("%d",&cas);
    scanf("%s",x);
    node=x[0]-64;
    while(scanf("%s",x)==1)
    {
        len=strlen(x);
        if(len==1)
        {
            if(k)
                printf("\n");
            bfs(node);
            k=1;
            node=x[0]-64;
            for(i=0; i<=max; i++)
                Graph[i].clear();
        }
        else
        {
            m=x[0]-64;
            n=x[1]-64;
            Graph[m].push_back(n);
            Graph[n].push_back(m);
        }
    }
    if(k)
        printf("\n");
    bfs(node);
    return 0;
}
