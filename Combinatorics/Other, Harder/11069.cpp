#include<cstdio>
using namespace std;

int main()
{
    long long  x[80];
    int n;
    x[0]=0;
    x[1]=1;
    x[2]=2;
    x[3]=2;
    x[4]=3;
    x[5]=4;
    for(int i=6; i<=76; i++)
        x[i]=x[i-2]+x[i-3];

    while(scanf("%d",&n)==1)
        printf("%lld\n",x[n]);
    return 0;
}
