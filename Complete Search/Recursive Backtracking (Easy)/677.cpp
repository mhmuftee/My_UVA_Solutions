#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

int e[15][15],taken[15],chek;
int N, E,siz;
vector<int>result;

void dfs(int n)
{
    taken[n]=1;
    siz=result.size();
    if(siz==N+1)
    {
        chek=1;
        printf("(");
        for(int i=0; i<siz; i++)
        {
            if(i)printf(",");
            printf("%d",result[i]+1);
        }
        printf(")\n");
        return ;
    }

    for (int i = 0; i < E; i++)
        if (e[n][i] && !taken[i] )
        {

            result.push_back(i);
            taken[i]=1;
            dfs(i);
            taken[i]=0;
            result.pop_back();
        }
    return ;
}

int main()
{
    int i,kas=0;
    do {
        scanf("%d %d",&E,&N);
        if(kas)printf("\n");
        memset(e, 0, sizeof e);

        for (i = 0; i < E; i++)
        {
            for (int j=0; j<E; j++)
            {
                int a;
                scanf("%d",&a);
                e[i][j] =a;
            }
        }

        chek=0;

        result.push_back(0);
        dfs(0);
        result.clear();
        if(!chek)
            printf("no walk of length %d\n",N);
        kas=1;

    } while(scanf("%d",&E) == 1 && E==-9999);

    return 0;
}
