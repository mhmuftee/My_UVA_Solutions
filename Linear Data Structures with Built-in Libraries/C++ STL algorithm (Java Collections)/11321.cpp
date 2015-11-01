#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int M;
bool cmp(long long a,long long b)
{
    long long x=a%M,y=b%M;
    int p=abs(a%2),q=abs(b%2);

    if(x<y) return true;
    if(x==y)
    {
        if(p && !q) return true;
        if(p && q && a>b) return true;
        if(!p && !q && a<b)return true;
    }
    return false;

}
int main()

{
    long long  a[10005];
    int N;
    while(scanf("%d %d",&N,&M)==2)
    {
        printf("%d %d\n",N,M);
        if(!N && !M)
        {

            break;
        }
        for(int i=0; i<N; i++)
        {
            scanf("%lld",&a[i]);

        }
        sort(a,a+N,cmp);

        for(int i=0; i<N; i++)
            printf("%lld\n",a[i]);

    }
    return 0;

}
