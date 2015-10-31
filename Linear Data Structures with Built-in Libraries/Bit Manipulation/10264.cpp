#include<cstdio>
#include<cmath>

using namespace std;

int N,corner,weight[17000],sum_weight[17000];

int  summation(int n)
{
    int sum=0;
    for(int i=0; i<N; i++)
    {
        int S=n;
        S^=(1<<i);
        sum+=weight[S];

    }
    return sum;
}


int main()
{
    while(scanf("%d",&N)==1)
    {
        corner = pow(2,N);

        for(int i=0; i<corner; i++)
            scanf("%d",&weight[i]);

        for(int i=0; i<corner; i++)
        {
            sum_weight[i]=summation(i);
        }
        int Max=0;
        for(int i=0; i<corner; i++)
        {
            int sum;
            int S;
            for(int j=0; j<N; j++)
            {
                S=i;
                S^=(1<<j);
                sum=sum_weight[S]+sum_weight[i];
                if(sum>Max)Max=sum;
            }

        }

        printf("%d\n",Max);


    }

    return 0;
}
