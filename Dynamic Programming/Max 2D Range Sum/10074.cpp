#include<cstdio>
using namespace std;

int main()
{
    int matrix [101][101];
    int a,m,n;
    while(scanf("%d %d",&m,&n)==2 && m && n)
    {
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                scanf("%d",&a);
                if(a)matrix[i][j]=-100000;
                else matrix[i][j]=1;
            }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i>0)matrix[i][j]+=matrix[i-1][j];
                if(j>0)matrix[i][j]+=matrix[i][j-1];
                if(i>0 && j>0) matrix[i][j]-=matrix[i-1][j-1];
            }
        }

        int max=0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                for(int k=i; k<m; k++)
                    for(int l=j; l<n; l++)
                    {
                        int sum=matrix[k][l];
                        if(i>0)sum-=matrix[i-1][l];
                        if(j>0)sum-=matrix[k][j-1];
                        if(i>0 && j>0) sum+=matrix[i-1][j-1];

                        if(sum>max)max=sum;
                    }
        printf("%d\n",max);
    }
    return 0;
}
