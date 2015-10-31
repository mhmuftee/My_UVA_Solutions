#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int T,N,I,J,K,M,count,c;
    bool a[1025];

    scanf("%d",&T);

    while(T--)
    {   count=0;
        scanf("%d %d",&N,&M);

        for(I=1; I<=pow(2,N); I++)
            a[I]=0;

        for(I=1; I<=M; I++)
        {   scanf("%d",&c);
            a[c]=1;
        }

        for(I=N; I>=1; I--)
        {
            for(J=2,K=1; J<=pow(2,I); J+=2,K++)
            {
                if(!(a[J]) && !(a[J-1]))
                    a[K]=0;
                else if(a[J] && a[J-1])
                    a[K]=1;
                else if(a[J] && !(a[J-1]))
                {
                    a[K]=0;
                    count++;
                }
                else if(!(a[J]) && a[J-1])
                {
                    a[K]=0;
                    count++;
                }

            }
        }

        printf("%d\n",count);
    }

    return 0;
}
