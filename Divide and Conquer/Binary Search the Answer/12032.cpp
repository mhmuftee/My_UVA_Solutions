#include<cstdio>
#define ma 100000

using namespace std;
int main()
{
    int array[ma+5],i,j,cas,n,max;

    scanf("%d",&cas);

    for(j=1; j<=cas; j++)
    {
        scanf("%d",&n);
        array[0]=0;
        for(i=1; i<=n; i++)
            scanf("%d",&array[i]);
        int dif;
        max=-1;
        for(i=0; i<n; i++)
        {
            dif=array[i+1]-array[i];

            if(dif>max)max=dif;
        }
        int k=max;

        for(i=0; i<n; i++)
        {
            dif=array[i+1]-array[i];
            if(dif==max)max--;
            else if(dif>max) {
                k++;
                break;
            }
        }
        printf("Case %d: %d\n",j,k);
    }
    return 0;
}
