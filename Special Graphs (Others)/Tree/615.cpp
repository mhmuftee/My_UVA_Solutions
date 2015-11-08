#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector <int> Graph[100010];
int Indegree[100010];
bool chek[100010];
map <int,int> ind;

void find(int n)
{
    if(chek[n])
        return ;
    chek[n]=true;

    for(int i=0; i<Graph[n].size(); i++)
        find(Graph[n][i]);
}

int main()
{
    int m,n,node=0,cas=1;
    ind.clear();
    memset(Indegree,0,sizeof(Indegree));

    while(scanf("%d %d",&m,&n)==2 && m!=-1 && n!=-1)
    {
        if(m==0 && n==0)
        {
            for(int I=1; I<=node; I++)
            {
                int s=Graph[I].size();
                for(int J=0; J<s; J++)
                    Indegree[Graph[I][J]]++;
            }
            int one=0,zero=0,root;
            for(int i=1; i<=node; i++)
                if(Indegree[i]==0) zero++,root=i;
                else if(Indegree[i]==1) one++;

            int tree=0;

            if(!node) tree=1;

            if(zero==1 && one==node-1)
                tree=1;

            if(tree)
            {
                memset(chek,0,sizeof(chek));

                find(root);
                int c=0;
                for(int i=1; i<=node; i++)
                    if(chek[i])c++;

                if(c!=node) tree =0;
            }

            if(tree)
                printf("Case %d is a tree.",cas);
            else
                printf("Case %d is not a tree.",cas);
            cas++;
            node=0;
            ind.clear();
            for(int i=0; i<100010; i++)
                Graph[i].clear();
            memset(Indegree,0,sizeof(Indegree));

            printf("\n");
            continue;
        }

        if(!ind[m]) ind[m]=++node;
        if(!ind[n]) ind[n]=++node;
        Graph[ind[m]].push_back(ind[n]);
    }
    return 0;
}
