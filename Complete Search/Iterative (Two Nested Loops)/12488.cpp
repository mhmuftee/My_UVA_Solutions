#include<cstdio>
using namespace std;
int main()
{
    int a[25],b[25];
    int N;
    while(scanf("%d",&N)==1 && N)
    {

        for(int i=0; i<N; i++)
            scanf("%d",&a[i]);

        for(int i=0; i<N; i++)
            scanf("%d",&b[i]);


        int max=0;
        for(int i=0; i<N-1; i++)
            for(int j=i+1; j<N; j++)
            {
                if(b[i]==a[j])
                {
                    int u=i;
                    int v=j;
                    max+=v-u;
                    for(int k=v; k>u; k--)
                    {
                        int p;
                        p=a[k-1];
                        a[k-1]=a[k];
                        a[k]=p;
                    }
                }
            }

        printf("%d\n",max);
    }

    return 0;
}
