#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int a[10],i,j,k;

    while(scanf("%d %d %d %d %d %d %d %d %d",&a[8],&a[7],&a[6],&a[5],&a[4],&a[3],&a[2],&a[1],&a[0])==9)
    {
        for(i=8; i>=0; i--)
            if(a[i]!=0)
            {
                j=i;
                break;
            }

        for(i=0; i<=8; i++)
            if(a[i]!=0)
            {
                k=i;
                break;
            }
        int c=0;
        for(i=8; i>=0; i--)
        {
            if(a[i]!=0)
            {
                c=1;
                if(i!=j)
                    printf(" ");
                if(a[i]>0)
                {
                    if(i!=j)
                        printf("+");
                }
                else
                    printf("-");
                if(i!=j)
                    printf(" ");
                if(a[i]!=1 && a[i]!=-1 && i!=0)
                    printf("%d",abs(a[i]));
                if(i>1)
                    printf("x^%d",i);
                if(i==1)
                    printf("x");
                if(i==0)
                    printf("%d",abs(a[i]));

            }

        }
        if(!c)
            printf("0");

        printf("\n");
    }
    return 0;
}
