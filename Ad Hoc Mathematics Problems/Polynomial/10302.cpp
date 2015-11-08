#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int save[50005];
    save[0]=0;
    for(int i=1; i<=50000; i++)
        save[i]=pow(i,3),
                save[i]+=save[i-1];
    int index;
    while(scanf("%d",&index)==1)
        printf("%lld\n",save[index]);
    return 0;

}

