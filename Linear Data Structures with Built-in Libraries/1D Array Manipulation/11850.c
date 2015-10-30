#include<stdio.h>
int main()
{
    int i,j,t,n,a[1000],f=0;

    while(scanf("%d",&n)==1)
    {
        f=0;
        if(n==0)break;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n-1; i++)
            for(j=i+1; j<n; j++)
                if(a[i]>a[j])
                {
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
        for(i=0; i<n-1; i++)
            if(a[i+1]-a[i]>200)
            {
                f=1;
                break;
            }


        if(f==0)
        {
            if((1422-a[n-1])>100)printf("IMPOSSIBLE\n");
            else
                printf("POSSIBLE\n");
        }
        else if(f==1)
        {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
