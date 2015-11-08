#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int x[100];
int matrix[93][10],max;
int  place(int k, int i)
{
    for(int j=1; j<=k-1; j++)
        if(x[j]==i  || abs(x[j]-i)== abs(j-k)  )
            return 0;
    return 1;
}

void nqueen(int k , int n)
{
    for(int i=1; i<=n; ++i)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                for(int j=1; j<=n; ++j)
                    matrix[max][j]=x[j];
                max++;
            }
            else
                nqueen(k+1,n);
        }
    }
}

int main()
{
    int a[10],kas=1;
    max=1;
    nqueen(1,8);

    while(scanf("%d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])==8)
    {
        int min=100000,maxi=0;
        for(int i=1; i<max; i++)
        {
            maxi=0;
            for(int j=1; j<=8; j++)
                if(a[j]!=matrix[i][j])maxi++;

            if(maxi<min)min=maxi;
        }

        printf("Case %d: %d\n",kas,min);
        kas++;
    }
    return 0;
}
