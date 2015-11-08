#include<cstdio>
#include<map>
#include<iostream>
#include<string>
using namespace std;

#define INF 10000
int dist[55][55];
int main()
{
    int node,edge,n,network=1;
    map<string,int>ind;
    string a,b;
    while(scanf("%d %d",&node,&edge)==2 && node && edge)
    {
        n=0;
        for(int i=1; i<=node; i++) {
            for(int j=1; j<=node; j++)
                dist[i][j]=INF;
            dist[i][i]=0;
        }

        ind.clear();
        for(int i=1; i<=edge; i++)
        {
            cin>>a>>b;

            if(!ind[a])
                ind[a]=++n;
            if(!ind[b])
                ind[b]=++n;

            dist[ind[a]][ind[b]]=1;
            dist[ind[b]][ind[a]]=1;
        }

        for(int k=1; k<=node; k++)
            for(int i=1; i<=node; i++)
                for(int j=1; j<=node; j++)
                    if(dist[i][j]>dist[i][k]+dist[k][j])
                        dist[i][j]=dist[i][k]+dist[k][j];

        int min=0;
        for(int i=1; i<=node; i++)
            for(int j=1; j<=node; j++)
                if(dist[i][j]>min) min = dist[i][j];

        printf("Network %d: ",network++);
        if(min==INF)
            printf("DISCONNECTED\n");
        else
            printf("%d\n",min);
        printf("\n");
    }
    return 0;
}
