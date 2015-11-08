#include<cstdio>
#include<cmath>
using namespace std;
int a[1000010];
int main()
{
    int i,N=1000000;
    a[0]=1;
    for(i=1; i<=N; i++)
    {
        a[i]=a[(int)floor(i-sqrt(i))]+a[(int)floor(log(i))]+a[(int)floor((i*sin(i)*sin(i)))];
        a[i]%=N;
    }
    while(scanf("%d",&N)==1 && N>=0)
    {
        printf("%d\n",a[N]);
    }
    return 0;

}
