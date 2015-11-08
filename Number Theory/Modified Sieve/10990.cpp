#include<cstdio>
#include<cmath>
#define max 2000000
bool prime[max+5];
int c[max+5];
int cum[max+5];
using namespace std;

int main()
{
    int i,j;
    for(i=4; i<=max; i+=2)
        prime[i]=1;
    for(i=1; i<=max; i++)
        c[i]=i;
    for(i=2; i<=max; i++)
    {
        if(prime[i]==0)
        {
            c[i]=i-1;
            for(j=2*i; j<=(max); j+=i)
            {
                prime[j]=1;
                c[j]/=i;
                c[j]*=(i-1);
            }
        }
    }
    int n;
    cum[2]=1;
    cum[1]=0;
    for(i=3; i<=max; i++)
    {
        n=i;
        int count=0;
        while(n!=1)
        {
            n=c[n];
            count++;
        }
        cum[i]+=count+cum[i-1];
    }

    int a,b,N;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&a,&b);

        printf("%d\n",cum[b]-cum[a-1]);
    }
    return 0;
}
