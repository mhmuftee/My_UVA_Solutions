#include<cstdio>
#include<vector>
using namespace std;
vector<int>G[10005];
bool chek[10005];
void find(int n)
{
    if(chek[n])
        return ;
    chek[n]=true;

    for(int i=0; i<G[n].size(); i++)
        find(G[n][i]);
}
int main()
{
    int i,j,n,m,l,cas;
    scanf("%d",&cas);
    while(cas--) {

        scanf("%d %d %d",&n,&m,&l);
        for(i=0; i<10005; i++)
            G[i].clear(),chek[i]=false;

        int total=0;
        while(m--)
        {
            scanf("%d %d",&i,&j);
            G[i].push_back(j);
        }

        while(l--)
        {
            scanf("%d",&m);
            find(m);
        }

        for(i=1; i<=n; i++)
            if(chek[i])
                total++;
        printf("%d\n",total);

    }
    return 0;
}
