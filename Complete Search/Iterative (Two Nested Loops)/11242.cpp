#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    double front[100],rear[100];
    int f,r;
    while(scanf("%d",&f)==1 && f)
    {
        scanf("%d",&r);

        for(int i=0; i<f; i++)
            scanf("%lf",&front[i]);

        for(int i=0; i<r; i++)
            scanf("%lf",&rear[i]);


        double ratio[10000];
        int k=0;
        for(int i=0; i<r; i++)
            for(int j=0; j<f; j++)
                ratio[k++]=(rear[i]/front[j]);

        sort(ratio,ratio+k);
        double max=0.0;
        for(int i=0; i<k-1; i++)
            if(ratio[i+1]/ratio[i]>max)
                max=ratio[i+1]/ratio[i];

        printf("%.2lf\n",max);
    }
    return 0;
}
