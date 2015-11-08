#include<cstdio>
using namespace std;

int main()
{
    int M,N,Q,cas;

    char Matrix[105][105];

    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%d %d %d",&M,&N,&Q);
        printf("%d %d %d\n",M,N,Q);

        for(int i=0; i<M; i++)
            scanf("%s",&Matrix[i]);

        for(int i=0; i<Q; i++)
        {
            int r,c;
            scanf("%d %d",&r,&c);
            char ch=Matrix[r][c];
            int area=1,count=0,max=0;
            while(r>=0 && c>=0)
            {
                count=0;
                for(int i=r; i<r+area && i<M; i++)
                    for(int j=c; j<c+area && j<N; j++) {
                        if(Matrix[i][j]==ch)
                            count++;
                    }
                if(count==area*area)
                    max=area;

                area+=2;
                r--;
                c--;
            }
            printf("%d\n",max);
        }
    }

    return 0;
}
