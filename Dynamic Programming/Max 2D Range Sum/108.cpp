#include<cstdio>
using namespace std;

int main() {
    int i,j,n,a[105][105];

    while(scanf("%d",&n)==1) {

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);

        for(i=0; i<n; i++)
            for(j=0; j<n; j++) {
                if(i>0)a[i][j]+=a[i-1][j];
                if(j>0)a[i][j]+=a[i][j-1];
                if(i>0 && j>0) a[i][j]-=a[i-1][j-1];
            }

        int max = -127*100*100;;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                for(int k=i; k<n; k++)
                    for(int l=j; l<n; l++)
                    {
                        int sum=a[k][l];

                        if(i>0)sum-=a[i-1][l];
                        if(j>0)sum-=a[k][j-1];
                        if(i>0 && j>0)sum+=a[i-1][j-1];

                        if(sum>max)max=sum;
                    }

        printf("%d\n",max);
    }
    return 0;
}
