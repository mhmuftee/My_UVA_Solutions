#include<cstdio>
#include<cmath>

using namespace std;

int Co_[25];

int main()
{
    int Cas,degree,K,d,n;

    scanf("%d",&Cas);

    while (Cas--)
    {
        scanf("%d",&degree);

        for(int i=0; i<=degree; i++)
            scanf("%d",&Co_[i]);

        scanf("%d",&d);

        scanf("%d",&K);

        int low=1;

        for(int i=1;; i++)
        {
            int high=i*d+low;
            if(K>=low && K<high)
            {
                n=i;
                break;
            }
            low=high;

        }
        long long num=0;

        for(int i=0; i<=degree; i++)
            num+=Co_[i]*pow(n,i);

        printf("%lld\n",num);
    }
    return 0;
}
