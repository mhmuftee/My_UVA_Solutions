#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int ci=1;
int x[100];
int c,r;
int  place(int k, int i)
{
    for(int j=1; j<=k-1; j++)
        if(x[j]==i  || abs(x[j]-i)== abs(j-k)  )
            return 0;
    return 1;
}

void nqueen(int k , int n)
{
    if(k==r)
    {
        if(place(r,c))
        {
            x[k]=c;
            if(k==n)
            {
                printf("%2d     ",ci++);
                for(int j=1; j<=n; ++j)
                    printf(" %d",x[j]);
                printf("\n");

            }
            else
            {
                nqueen(k+1,n);
            }
        }
    }
    else
    {
        for(int i=1; i<=n; ++i)
        {
            if(place(k,i))
            {
                x[k]=i;
                if(k==n)
                {
                    printf("%2d     ",ci++);
                    for(int j=1; j<=n; ++j)
                        printf(" %d",x[j]);
                    printf("\n");
                }
                else
                    nqueen(k+1,n);
            }
        }
    }
}

int main()
{

    int N,m,n;

    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        scanf("%d %d",&c,&r);
        if(i!=1)
            printf("\n");
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        ci=1;
        nqueen(1,8);
    }
    return 0;
}
