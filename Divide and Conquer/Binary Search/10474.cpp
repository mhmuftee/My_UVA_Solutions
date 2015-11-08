#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
map<int,int>ind;

int N,Q,marbel[10010];
int main()
{
    int kas=1;
    while(scanf("%d %d",&N,&Q)==2 && N)
    {
        ind.clear();
        for(int i=0; i<N; i++)
            scanf("%d",&marbel[i]);

        sort(marbel+0,marbel+N);

        for(int i=0; i<N; i++)
        {
            if(!ind[marbel[i]])
                ind[marbel[i]]=i+1;
        }

        printf("CASE# %d:\n",kas++);

        for(int i=0; i<Q; i++)
        {
            scanf("%d",&N);
            if(!ind[N])
                printf("%d not found\n",N);
            else
                printf("%d found at %d\n",N,ind[N]);
        }
    }

    return 0;
}
