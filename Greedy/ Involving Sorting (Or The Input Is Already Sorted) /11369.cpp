#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int i,j,k,N,price[20001];

    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&N);

        for(i=0; i<N; i++)
            scanf("%d",&price[i]);
        sort(price,price+N);
        long s=0;
        for(i=N-3; i>=0; i-=3)
            s+=price[i];
        printf("%d\n",s);
    }
}
