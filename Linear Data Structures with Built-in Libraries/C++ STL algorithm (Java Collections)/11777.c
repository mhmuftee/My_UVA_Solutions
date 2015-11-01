#include<stdio.h>
#include<math.h>

int main()
{
    int mi,n,i,j,s,a[7];

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s=0;
        for(j=0; j<7; j++)
        {
            scanf("%d",&a[j]);

        }
        mi=a[4];
        if(a[4]>a[5]) mi=a[5];
        if(a[6]<mi) mi=a[6];

        s=a[0]+a[1]+a[2]+a[3]+((a[4]+a[5]+a[6]-mi)/2);

        switch(s/10)
        {
        case 10:
            printf("Case %d: A\n",i);
            break;
        case 9:
            printf("Case %d: A\n",i);
            break;
        case 8:
            printf("Case %d: B\n",i);
            break;
        case 7:
            printf("Case %d: C\n",i);
            break;
        case 6:
            printf("Case %d: D\n",i);
            break;
        default :
            printf("Case %d: F\n",i);
            break;
        }
    }
    return 0;
}
