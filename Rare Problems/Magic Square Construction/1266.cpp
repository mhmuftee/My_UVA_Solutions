#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main(void)
{
    int i,j,n,s,m,c=0;
    char ch='a';
    int a[17][17];
    for(i=1; i<=15; i++)
        for(j=1; j<=15; j++)
            a[i][j]=0;

    while(scanf("%d",&n)==1)
    {   if(c)printf("\n");
        for(i=1; i<=15; i++)
            for(j=1; j<=15; j++)
                a[i][j]=0;
        s=0;
        m=0;
        for(i=1; i<=n; i++)
        {
            s=0;
            m=0;
            for(j=1; j<=n; j++)
            {
                s=i+j-1+floor(n/2);
                s=s%n;
                s=s*n;
                m=i+2*j-2;
                m=m%n;
                s=s+m+1;

                a[i][j]=s;

            }
        }
        int ab=n*(n*n+1);
        ab=ab/2;
        printf("n=%d, sum=%d\n",n,ab);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                if(a[i][j])
                {
                    if(n>10)
                        printf("%4d",a[i][j]);
                    else if(n>3)
                        printf("%3d",a[i][j]);
                    else
                        printf("%2d",a[i][j]);
                }
            printf("\n");
            c=1;
        }
    }
    return 0;

}
