#include<cstdio>

using namespace std;
int main()
{
    long long m,n,o;

    while(scanf("%lld %lld",&m,&n)==2)
    {   int space=1;
        int chek=1;
        o=m;
        if(n<=1 || m<n || m<=1)
            chek=0;
        else
            while(o!=1)
            {
                if(o%n!=0) {
                    chek=0;
                    break;
                }
                o=o/n;

            }

        if(chek==0)
            printf("Boring!\n");
        if(chek) {
            while(m!=1)
            {   printf("%lld ",m);
                m=m/n;
            }
            printf("1\n");
        }
    }
    return 0;
}
