#include<cstdio>
using namespace std;

int main()
{
    long long N,sum,update,a[100000];
    while(scanf("%lld",&N)==1 && N)
    {
        sum=update=0;
        for(int i=0; i<N; i++)
        {
            scanf("%lld",&a[i]);
        }
        int c=0;
        for(int i=0; i<N; i++)
            if(a[i]>0)
            {
                c=1;
                break;
            }
        int d=-1,b=-1;
        if(!c)
            printf("Losing streak.\n");
        else
        {
            for(int i=0; i<N; i++)
            {
                update+=a[i];
                d=i;

                if(update<0)
                {
                    d=-1;
                    update=0;
                }

                if(update>sum)
                {
                    sum=update;
                    b=i;
                }
            }
            printf("The maximum winning streak is %lld %d %d.\n",sum,d,b);
        }
    }
    return 0;
}
