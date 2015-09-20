#include<stdio.h>
int main()
{
    int T,N,c[100],i,s,j;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        for(j=1; j<=N; j++)
            scanf("%d",&c[j]);
        s=0;
        for(j=1; j<=N; j++)
            if(s<=c[j])
                s=c[j];
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
