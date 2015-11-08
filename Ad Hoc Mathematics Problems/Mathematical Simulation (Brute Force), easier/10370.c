#include<stdio.h>
int main()
{
    int i,n,s,m,a[1000],b,c;
    char ch='%';
    float v=0,j;
    scanf("%d",&m);
    for(c=0; c<m; c++)
    {
        scanf("%d",&n);
        s=0;
        j=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
        b=s/n;
        for(i=0; i<n; i++)
            if(b<a[i])
                j++;
        v=(j*100)/n;
        printf("%.3f%c\n",v,ch);
    }
    return 0;
}
