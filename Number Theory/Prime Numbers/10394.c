#include<stdio.h>
#include<math.h>
#define max 19000000
char prime[max+5];
int twin[1000000];
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

}

int main()
{
    long int n,i,k=1;
    sieve();
    for(i=3; i<=max; i=i+2)
        if(prime[i]==1 && prime[i+2]==1)
        {
            twin[k]=i;
            k++;
        }
    while(scanf("%lu",&n)==1)
    {
        printf("(%lu, %lu)\n",twin[n],twin[n]+2);
    }
    return 0;
}
