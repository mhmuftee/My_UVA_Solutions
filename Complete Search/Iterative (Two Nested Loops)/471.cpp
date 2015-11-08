#include<cstdio>
#include<cmath>

using namespace std;
#define L 9876543210
int main()
{
    long long int g,i,j,n;
    scanf("%lld",&g);
    while(g--)
    {
        scanf("%lld",&n);
        for(i=1; i<=L; i++)
        {   long long m=n*i,a[10]={0};
            long long o=m;
            if(m>L)break;
            int f=0;
            o=i;
            int aa[10]= {0};
            while(o)
            {
                if(aa[o%10]) {
                    f=1;
                    break;
                }
                if(!aa[o%10])
                    aa[o%10]=1;
                o/=10;
            }
            o=m;
            if(!f)
                while(o)
                {
                    if(a[o%10]) {
                        f=1;
                        break;
                    }
                    if(!a[o%10])
                        a[o%10]=1;
                    o/=10;
                }

            if(!f)
                printf("%lld / %lld = %lld\n",m,i,n);
        }
        if(g)
            printf("\n");
    }
    return 0;
}
