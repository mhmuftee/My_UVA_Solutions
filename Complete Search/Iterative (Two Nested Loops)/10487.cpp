#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
int a[1001],b[30],d[30],sum[1000010];
int main()
{
    int m,n,kas=1;
    while(scanf("%d",&n)==1 && n)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        scanf("%d",&m);

        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);

        int k=0;
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                sum[k++]=a[i]+a[j];

        for(int i=0; i<m; i++)
        {
            int c=247483647;
            for(int l=0; l<k; l++)
                if(abs(sum[l]-b[i])<c )
                {
                    c=abs(sum[l]-b[i]);
                    d[i]=sum[l];
                }
        }
        printf("Case %d:\n",kas++);
        for(int i=0; i<m; i++)
            printf("Closest sum to %d is %d.\n",b[i],d[i]);

    }
    return 0;
}
