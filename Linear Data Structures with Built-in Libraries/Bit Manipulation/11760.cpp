#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

bool row[10005],colum[10005];

int main()
{
    int R,C,N,a,b,kas=0;

    while(scanf("%d %d %d",&R,&C,&N)==3)
    {
        kas++;
        if(R==0 && C==0 && N==0)
            break;
        memset(row,0,sizeof(row));
        memset(colum,0,sizeof(colum));

        for(int i=0; i<N; i++)
        {
            scanf("%d %d",&a,&b);
            row[a]=1;
            colum[b]=1;
        }
        scanf("%d %d",&a,&b);

        int escape=0;

        if(!row[a] && !colum[b])
            escape=1;

        if(row[a])
        {
            if(a-1 >=0 && row[a-1]==0 && colum[b]==0)
                escape=1;


            if(a+1<R && row[a+1]==0 && colum[b]==0)
                escape=1;
        }

        if(colum[b])
        {
            {
                if(b-1>=0 && colum[b-1]==0 && row[a]==0)
                    escape=1;

                if(b+1<C && colum[b+1]==0 && row[a]==0)
                    escape=1;
            }
        }

        if(escape)
            printf("Case %d: Escaped again! More 2D grid problems!\n",kas);
        else
            printf("Case %d: Party time! Let's find a restaurant!\n",kas);
    }

    return 0;
}
