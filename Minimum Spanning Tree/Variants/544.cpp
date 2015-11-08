#include<cstdio>
#include<string>
#include<map>
#include<iostream>
using namespace std;

map <string,int> index;

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int i,j,k,node,edge,weight,m=0,cost[205][205],kas=1;
    string a,b;
    while(scanf("%d %d",&node,&edge)==2 && node && edge)
    {   m=0;
        for(i=1; i<=node; i++)
            for(j=1; j<=node; j++)
                cost[i][j]=0;

        for(i=1; i<=edge; i++)
        {
            cin>>a>>b>>weight;

            if(!index[a])
                index[a]=++m;
            if(!index[b])
                index[b]=++m;
            cost[index[a]][index[b]]=cost[index[b]][index[a]]=weight;
        }
        cin>>a>>b;
        for(int k=1; k<=node; ++k)
            for(int i=1; i<=node; ++i)
                for(int j=1; j<=node; ++j)
                    cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));

        printf("Scenario #%d\n%d tons\n\n",kas++,cost[index[a]][index[b]]);
        index.clear();
    }
    return 0;
}
