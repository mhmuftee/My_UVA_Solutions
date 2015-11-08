#include<cstdio>
#include<cmath>
#define maxi 1000000

bool array[maxi];
int cum[maxi];
using namespace std;

long int divnum(long int n)
{
    long long int i,l,s=1,max=0,min=0,count=0;
    if(n==1)
    {
        s=1,count=1;
    }
    else
    {
        for(i=2; i<=sqrt(n);)
        {
            if(n%i==0)
            {
                max++;
                n=n/i;
                l=n;
                min=max;
                count=1;
            }

            if(n%i!=0)
            {
                i++;
                s=s*(max+1);
                max=0;
                min=0;
            }
            if(n==l)min++;
        }
        s=s*(min+1);
    }

    if(count==0)return 2;
    return s;
}


int main()
{

    long i,j,k,n;

    n=1;
    array[n]=1;
    k=0;
    while(1)
    {

        n=n+divnum(n);
        array[n]=1;
        k++;
        if(n>=maxi)
            break;

    }
    cum[1]=1;
    for(i=2; i<=maxi; i++)
        if(array[i])
            cum[i]=cum[i-1]+1;
        else
            cum[i]=cum[i-1];

    int cas,a,b;

    scanf("%d",&cas);

    for(i=1; i<=cas; i++)
    {
        scanf("%d %d",&a,&b);

        int count=0;
        count = cum[b]-cum[a-1];

        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
