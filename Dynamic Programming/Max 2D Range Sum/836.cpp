#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a[100];
    int i,len,n,matrix[101][101];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        len=strlen(a);

        for(int ii=0; ii<len; ii++)
        {
            matrix[0][ii]=a[ii]-48;
            if(matrix[0][ii]==0)matrix[0][ii]=-10000;
        }

        for(int ii=1; ii<len; ii++)
        {
            scanf("%s",a);
            for(int jj=0; jj<len; jj++) {
                matrix[ii][jj]=a[jj]-48;
                if(matrix[ii][jj]==0)matrix[ii][jj]=-10000;
            }
        }

        for(int ii=0; ii<len; ii++)
        {
            for(int jj=0; jj<len; jj++)
            {
                if(ii>0)
                    matrix[ii][jj]+=matrix[ii-1][jj];
                if(jj>0)
                    matrix[ii][jj]+=matrix[ii][jj-1];
                if(ii>0 && jj>0)
                    matrix[ii][jj]-=matrix[ii-1][jj-1];
            }
        }
        int max=0;

        for(i=0; i<len; i++)
            for(int j=0; j<len; j++)
                for(int k=i; k<len; k++)
                    for(int l=j; l<len; l++)
                    {
                        int sum=matrix[k][l];

                        if(i>0)sum-=matrix[i-1][l];
                        if(j>0)sum-=matrix[k][j-1];
                        if(i>0 && j>0)sum+=matrix[i-1][j-1];

                        if(sum>max)max=sum;
                    }
        printf("%d\n",max);
        if(n>0) printf("\n");
    }
    return 0;
}
