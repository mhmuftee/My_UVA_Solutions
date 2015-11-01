#include<cstdio>
#include<vector>
using namespace std;

vector<int>vs[1000005];
int s[1000005];
int main()
{
    int i,j,k,m,n;

    while(scanf("%d %d",&m,&n)==2)
    {
        for(i=0; i<=100005; i++)
            vs[i].clear();
        for(i=1; i<=m; i++)
            scanf("%d",&s[i]);

        for(i=1; i<=m; i++)
            vs[s[i]].push_back(i);
        while(n--)
        {
            scanf("%d %d",&j,&k);
            if(j<=vs[k].size())
                printf("%d\n",vs[k][j-1]);
            else
                printf("0\n");
        }
    }
    return 0;
}
