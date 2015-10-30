#include<stdio.h>
int main()
{
    int i,j=0,n,a[100],b=0,c=0,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        s=b=c=0;
        j++;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
        b=s/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>b)
                c=c+a[i]-b;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,c);
    }
    return 0;
}
