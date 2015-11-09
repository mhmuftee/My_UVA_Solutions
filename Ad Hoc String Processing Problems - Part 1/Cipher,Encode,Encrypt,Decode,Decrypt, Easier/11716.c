#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[10201],b[101][101];
    int i,j,o,p,k,n,m;
    scanf("%d\n",&o);
    for(p=0; p<o; p++)
    {
        n=0;
        m=0;

        gets(a);
        n=strlen(a);
        m=sqrt(n);
        if(m*m==n)
        {
            for(i=0,k=0; i<m; i++)
                for(j=0; j<m; j++)
                {
                    b[i][j]=a[k];
                    k++;
                }

            for(i=0; i<m; i++)
                for(j=0; j<m; j++)
                    printf("%c",b[j][i]);
            printf("\n");

        }
        else
            printf("INVALID\n");
    }
    return 0;
}
