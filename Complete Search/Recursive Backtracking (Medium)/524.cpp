#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int arr[20],n,u,taken[100];
vector<int>result;
#define max 999
char prime[max+5];

void sieve()
{
    long int i,j;
    for(i=2; i<=max; i++)prime[i]=1;
    for(i=2; i<=sqrt(max);)
    {
        if(prime[i]==1)
            for(j=2*i; j<=max; j=j+i)
            {
                prime[j]=0;
            }
        i++;
    }
    prime[2]=0;
}

void call()
{
    if(result.size()==n)
    {
        if(prime[result[n-1]+result[0]]) {
            printf("%d",result[0]);
            for(int i=1; i<n; i++)
                printf(" %d",result[i]);
            printf("\n");
        }

        return ;
    }

    for(int i=2; i<=n; i++)
    {
        if(!taken[i])
        {
            if(!result.empty()) {
                u=result.back();
                if(prime[u+arr[i]]==0)continue;
                result.push_back(arr[i]);
                taken[i]=1;
                call();
                taken[i]=0;
                result.pop_back();
            }
        }
    }

}
int main()
{
    sieve();
    int cas=1;
    while(scanf("%d",&n)==1)
    {
        for(int i=1; i<=n; i++)
            arr[i]=i,taken[i]=0;
        result.clear();
        result.push_back(1);
        if(cas!=1)
            printf("\n");
        printf("Case %d:\n",cas++);
        if(n==1)printf("1\n");
        else if(n%2==0)
        {
            call();
        }
    }
    return 0;
}
