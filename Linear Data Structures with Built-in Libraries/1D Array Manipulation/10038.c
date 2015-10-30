
#include<stdio.h>

int main()
{
    int b[3000],i,j,k,m,n,o,c,a[3000];

    n=0;
    while(scanf("%d",&n)!=EOF) {
        m=0;
        c=0;
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);

        for(i=1; i<=n-1; i++)
        {

            if(a[i]>=a[i+1])
                b[i]=a[i]-a[i+1];
            else
                b[i]=a[i+1]-a[i];

        }


        for(i=1; i<=n-1; i++)

            c=c+b[i];

        if(b[1]==0||b[n-1]==0)
            m=n-2;
        else
            m=n-1;
        if(m==0)
            printf("Jolly\n");
        else
            o=m*(m+1)/2;
        if(c==o)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
