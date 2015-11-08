#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int ci=1;
int x[100];
int c,r,count;
int matrix[10][10],max;

int  place(int k, int i) {
    for(int j=1; j<=k-1; j++)
        if(x[j]==i  || abs(x[j]-i)== abs(j-k)  )
            return 0;
    return 1;
}

void nqueen(int k , int n) {
    for(int i=1; i<=n; ++i)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n) {
                int cc=0;
                count=0;
                for(int j=1; j<=n; ++j) {
                    count+=matrix[j][x[j]];
                }
                if(count>max)max=count;
            }
            else
            {
                nqueen(k+1,n);
            }
        }
    }
}


int main() {
    int N,m,n;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {

        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++)
                scanf("%d",&matrix[i][j]);

        max=0;

        nqueen(1,8);
        printf("%5d\n",max);
    }
    return 0;
}
