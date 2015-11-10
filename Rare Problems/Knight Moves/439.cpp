#include<stdio.h>
int main()
{
    int i,n,m,j,k,cost[65][65];
    for(i=1; i<=64; i++)
        for(j=1; j<=64; j++)
            cost[i][j]=99,cost[i][i]=0;
    for( i=1; i<=8; i++)
    {
        for( j=1; j<=8; j++)
        {
            n=(i-1)*8+j;
            if((i-2)>=0 && (j-2)>0)
            {
                m=(i-2)*8+j-2;
                cost[n][m]=1;
            }
            if((i-2)>=0 && (j+2)<=8)
            {
                m=(i-2)*8+j+2;
                cost[n][m]=1;
            }
            if((i)<8 && (j-2)>0)
            {
                m=i*8+j-2;
                cost[n][m]=1;
            }
            if((i)<8 && (j+2)<=8)
            {
                m=i*8+j+2;
                cost[n][m]=1;
            }
            if((i-3)>=0 && (j-1)>0)
            {
                m=(i-3)*8+j-1;
                cost[n][m]=1;
            }
            if((i-3)>=0 && (j+1)<=8)
            {
                m=(i-3)*8+j+1;
                cost[n][m]=1;
            }
            if((i+1)<8 && (j-1)>0)
            {
                m=(i+1)*8+j-1;
                cost[n][m]=1;
            }
            if((i+1)<8 && (j+1)<=8)
            {
                m=(i+1)*8+j+1;
                cost[n][m]=1;
            }
        }
    }
    for(k=1; k<=64; k++)
        for(i=1; i<=64; i++)
            for(j=1; j<=64; j++)
                if(cost[i][j]>cost[i][k]+cost[k][j])
                    cost[i][j]=cost[i][k]+cost[k][j];
    char g[4],h[4];
    while(scanf("%s %s",g,h)==2)
    {
        n=(g[0]-97)*8+g[1]-48;
        m=(h[0]-97)*8+h[1]-48 ;
        printf("To get from %s to %s takes %d knight moves.\n",g,h,cost[n][m]);
    }
    return 0;
}
