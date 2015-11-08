#include<cstdio>
using namespace std;

int main()
{
    int N,cas,matrix[101][101];

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&N);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                matrix[i][j]=1;

        int M;

        scanf("%d",&M);

        while(M--)
        {
            int r1,c1,r2,c2;
            scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

            for(int i=r1-1; i<r2; i++)
                for(int j=c1-1; j<c2; j++)
                    matrix[i][j]=-10000;
        }



        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(i>0)matrix[i][j]+=matrix[i-1][j];
                if(j>0)matrix[i][j]+=matrix[i][j-1];
                if(i>0 && j>0) matrix[i][j]-=matrix[i-1][j-1];
            }

        int max=0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                for(int k=i; k<N; k++)
                    for(int l=j; l<N; l++)
                    {
                        int sum=matrix[k][l];
                        if(i>0)sum-=matrix[i-1][l];
                        if(j>0)sum-=matrix[k][j-1];
                        if(i>0 && j>0)sum+=matrix[i-1][j-1];

                        if(sum>max)max=sum;
                    }
        printf("%d\n",max);
    }
    return 0;
}
