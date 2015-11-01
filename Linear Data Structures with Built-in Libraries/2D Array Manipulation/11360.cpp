#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int i,j,k,l,n,m,x,y,z,cas,a[11][11],b[11][11];
    char c[10],d[10],ch;
    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {
        scanf("%d",&n);
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%c",&ch);
                a[i][j]=ch-48;
            }
            getchar();
        }
        scanf("%d",&m);
        getchar();
        for(l=0; l<m; l++)
        {
            gets(c);
            z=sscanf(c,"%s %d %d",d,&x,&y);

            if(z==1)
            {
                if(strcmp(d,"transpose")==0)
                {
                    for(i=0; i<n; i++)
                        for(j=0; j<n; j++)
                            b[i][j]=a[j][i];
                    for(i=0; i<n; i++)
                        for(j=0; j<n; j++)
                            a[i][j]=b[i][j];

                }
                if(strcmp(d,"inc")==0)
                {
                    for(i=0; i<n; i++)
                        for(j=0; j<n; j++)
                        {
                            a[i][j]++;
                            a[i][j]%=10;
                        }
                }
                if(strcmp(d,"dec")==0)
                {
                    for(i=0; i<n; i++)
                        for(j=0; j<n; j++)
                        {
                            a[i][j]--;
                            a[i][j]%=10;
                            if(a[i][j]<0)
                                a[i][j]+=10;
                        }
                }
            }

            if(z==3)
            {
                if(strcmp(d,"row")==0)
                {
                    for(i=0; i<n; i++)
                        b[1][i]=a[x-1][i];
                    for(i=0; i<n; i++)
                        a[x-1][i]=a[y-1][i];
                    for(i=0; i<n; i++)
                        a[y-1][i]=b[1][i];
                }

                if(strcmp(d,"col")==0)
                {
                    for(i=0; i<n; i++)
                        b[i][1]=a[i][x-1];
                    for(i=0; i<n; i++)
                        a[i][x-1]=a[i][y-1];
                    for(i=0; i<n; i++)
                        a[i][y-1]=b[i][1];
                }
            }

        }
        printf("Case #%d\n",k);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                printf("%d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
