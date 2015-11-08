#include<cstdio>
#include<cmath>
#include<cstdlib>
#define max 105
#define INF 100000000
using namespace std;

int main()
{
    int i,j,k,n;
    char ss[100];
    int mat[max][max]= {0};

    while(scanf("%d",&n)==1) {
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                mat[i][j]=INF;
        int s=0;
        for(i=2; i<=n; i++)
            for(j=1; j<i; j++) {
                scanf("%s",&ss);

                if(ss[0]=='x')
                    mat[j][i]=mat[i][j]=INF;
                else
                {
                    s=atoi(ss);
                    mat[j][i]=mat[i][j]=s;
                }
            }

        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    if(mat[i][k]+mat[k][j]<mat[i][j])
                        mat[i][j]=mat[i][k]+mat[k][j];

        s=0;
        for(k=1; k<=n; k++)
            mat[k][k]=0;
        for(k=1; k<=n; k++)
            if(mat[1][k]>s)
                s=mat[1][k];
        printf("%d\n",s);
    }
    return 0;
}

