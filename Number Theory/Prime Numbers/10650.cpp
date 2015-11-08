#include<cstdio>
#include<cmath>
#define max 32000
using namespace std;

bool prime[32005];
int prime_save[32005];
struct primer
{
    int a[5];
} array[1000];
int sieve()
{
    int i,n,k;

    for(i=4; i<=max; i+=2)
        prime[i]=1;

    for(i=3; i<=sqrt(max); i+=2)
    {
        if(prime[i]==0)
            for(int j=i*i; j<=max; j+=2*i)
                prime[j]=1;
    }
    prime_save[0]=2;
    for(i=3, k=1; i<=max; i+=2)
        if(prime[i]==0)
            prime_save[k++]=i;


    return k;

}
int main()
{
    int k=sieve();
    int count=0,j=0;


    for(int i=2; i<k-3;)
    {
        if((prime_save[i]-prime_save[i-1]) ==(prime_save[i+2]-prime_save[i+1]) && (prime_save[i+1]-prime_save[i]) ==(prime_save[i+2]-prime_save[i+1]) )

        {   array[j].a[0]=prime_save[i-1];
            array[j].a[1]=prime_save[i];
            array[j].a[2]=prime_save[i+1];
            array[j].a[3]=prime_save[i+2];;
            j++;
            i+=3;
        }
        else if((prime_save[i]-prime_save[i-1])==(prime_save[i+1]-prime_save[i]))

        {   array[j].a[0]=prime_save[i-1];
            array[j].a[1]=prime_save[i];
            array[j].a[2]=prime_save[i+1];
            array[j].a[3]=0;
            j++;
            i+=2;
        }
        else
            i++;
    }

    int a,b,c,i;

    while(scanf("%d %d",&a,&b)==2 && (a || b))
    {   if(a>b)
        {
            c=b;
            b=a;
            a=c;
        }
        for(i=0; i<j; i++)
            if(array[i].a[0]>=a && array[i].a[3]<=b && array[i].a[3]>array[i].a[2])
            {   printf("%d %d %d %d\n",array[i].a[0],array[i].a[1],array[i].a[2],array[i].a[3]);
                count++;
            }
            else if(array[i].a[0]>=a && array[i].a[2]<=b && array[i].a[3]==0)
            {   printf("%d %d %d\n",array[i].a[0],array[i].a[1],array[i].a[2]);
                count++;
            }
    }
    return 0;
}
