#include<cstdio>
using namespace std;

int main()
{
    int i,k,m,n,cc,c[25],cas=1;
    while(scanf("%d %d %d",&n,&m,&cc)==3 && n && m && cc)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&c[i]);
        int turn[25]= {0},fuse=0;
        int sum=0,max=0;

        for(i=0; i<m; i++)
        {
            scanf("%d",&k);
            if(turn[k])
            {
                sum-=c[k];
                turn[k]=0;
            }
            else if(!turn[k])
            {
                sum+=c[k];
                turn[k]=1;
            }
            if(max<sum)
                max=sum;

            if(sum>cc)
                fuse=1;

        }

        printf("Sequence %d\n",cas);
        if(fuse)
            printf("Fuse was blown.\n");
        else
        {
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n",max);
        }
        printf("\n");
        cas++;
    }
    return 0;
}
