#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>

#define Max 30

using namespace std;

struct node
{
    double data;
    char name;
} Array[100];

bool cmp (node a,node b)
{
    if(a.data==b.data)
        return a.name<b.name;
    else
        return a.data>b.data;
}

vector <int> Graph[Max];
map <char,int>indexing;
double relative[100];
char name[100];
int bfs(int src,int dis)
{
    queue < int > Q;
    int color[Max+1]= {0},dist[Max+1];
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<Graph[u].size(); i++)
        {
            int v=Graph[u][i];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }

    return dist[dis]-1;
}

int main()
{
    int N;

    while(scanf("%d",&N)==1)
    {
        for(int i=0; i<=Max; i++)
            Graph[i].clear();

        indexing.clear();

        string S1,S2;
        double number;

        int M=1;

        for(int i=1; i<=N; i++)
        {
            cin>>S1>>number>>S2;
            if(!indexing[S1[0]])
                indexing[S1[0]]=++M;

            relative[indexing[S1[0]]]=number;
            name[indexing[S1[0]]]=S1[0];
            for(int j=0; j<S2.size(); j++)
            {
                if(S2[j]=='*') indexing[S2[j]]=1;
                else if(!indexing[S2[j]])
                    indexing[S2[j]]=++M;

                int m=indexing[S1[0]];
                int n=indexing[S2[j]];

                Graph[m].push_back(n);
                Graph[n].push_back(m);
            }
        }

        int j=0;
        for(int i=2; i<=N+1; i++)
        {
            int Minus=bfs(i,1);

            double rel=0;
            rel=relative[i];
            while(Minus--)
            {
                rel=rel- rel*5/100.0;
            }

            Array[j].data=rel;
            Array[j].name=name[i];
            j++;

        }

        sort(Array,Array+j,cmp);

        printf("Import from %c\n",Array[0].name);
    }

    return 0;
}
