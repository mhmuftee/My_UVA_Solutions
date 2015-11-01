#include<cstdio>
#include<vector>
using namespace std;

vector <pair<int,int> >vs[10005];
int main()
{
    int  i,j,k,n,m,x,y,sa[10005];
    while(scanf("%d %d",&m,&y)==2)
    {
        for(i=0; i<=10005; i++)
            vs[i].clear();

        for(i=1; i<=m; i++)
        {
            scanf("%d",&n);
            for(j=1; j<=n; j++)
                scanf("%d",&sa[j]);

            for(j=1; j<=n; j++)
            {
                scanf("%d",&x);

                vs[sa[j]].push_back(make_pair(i,x));
            }

        }

        printf("%d %d\n",y,m);

        for(i=1; i<=y; i++)
        {
            int z=vs[i].size();
            printf("%d",z);

            for(j=0; j<z; j++)
                printf(" %d",vs[i][j].first);
            printf("\n");
            bool space=false;
            for(j=0; j<z; j++)
            {
                if(space)
                    printf(" ");
                printf("%d",vs[i][j].second);
                space=true;
            }
            printf("\n");

        }
    }
    return 0;
}
