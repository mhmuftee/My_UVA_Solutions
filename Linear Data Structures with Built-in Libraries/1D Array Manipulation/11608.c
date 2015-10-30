#include<stdio.h>
int main()
{
    int a[13],b[12],i,n,s,j=1;
    while(scanf("%d",&n)==1)

    {
        if(n<0)break;
        s=0;
        a[0]=n;
        for(i=1; i<=12; i++)
            scanf("%d",&a[i]);
        for(i=0; i<12; i++)
            scanf("%d",&b[i]);
        printf("Case %d:\n",j);


        for(i=0; i<12; i++)
        {
            if(a[i]>=b[i])
            {
                s=s+(a[i]-b[i]);
                printf("No problem! :D\n");
            }
            else
            {
                s=s+a[i];
                if(s>=b[i])
                {
                    printf("No problem! :D\n");
                    s=s-b[i];
                }
                else
                    printf("No problem. :(\n");
            }
        }
        j++;
    }
    return 0;
}
