#include<cstdio>
#include<cmath>

int main()
{
    int a[10000],b[10000],i,j,n,max,cas,kas;
    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%d",&kas);

        for(i=1; i<=kas; i++)
            scanf("%d",&a[i]);
        int s=0,count=0;
        for(i=2; i<=kas; i++)
        {
            for(j=1; j<=i-1; j++)
                if(a[j]<=a[i])
                    count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
