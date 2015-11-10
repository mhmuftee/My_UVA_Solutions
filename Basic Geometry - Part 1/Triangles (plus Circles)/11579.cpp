#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
int main()
{
    double N[10005],s,ss;
    int cas,i,j,NN,chek;
    scanf("%d",&cas);
    while(cas--)
    {
        ss=0;
        scanf("%d",&NN);
        for(i=0; i<NN; i++)
            scanf("%lf",&N[i]);
        sort(N,N+NN);

        for(i=NN-1; i>=2; i--)
        {
            if(N[i]<=N[i-1]+N[i-2])
            {
                s=N[i]+N[i-1]+N[i-2];
                s/=2;
                s*=(s-N[i])*(s-N[i-1])*(s-N[i-2]);
                s=sqrt(s);

                if(s>ss)
                    ss=s;
            }
        }
        printf("%.2lf\n",ss);
    }
    return 0;
}
