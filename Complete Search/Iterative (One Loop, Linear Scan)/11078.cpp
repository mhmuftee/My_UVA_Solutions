#include<cstdio>
using namespace std;

int main()
{
    int N,cas;
    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%d",&N);

        int a[100005];

        for(int i=0; i<N; i++)
            scanf("%d",&a[i]);

        int   senior=-300000,max=-300000;
        for(int i=0; i<N-1; i++)
        {
            if(a[i]>senior)senior=a[i];

            if(senior-a[i+1]>max)max=senior-a[i+1];

        }

        printf("%d\n",max);

    }

    return 0;
}
