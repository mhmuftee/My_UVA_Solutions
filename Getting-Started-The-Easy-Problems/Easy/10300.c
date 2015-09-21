#include<stdio.h>

int main()
{
    long int a,b,c,n,m,x,y,z,i,j,k;
    scanf("%ld",&n);
    {
        for(j=0; j<n; j++)
        {
            scanf("%ld",&m);
            {
                z=0;
                for(i=0; i<m; i++)
                {
                    scanf("%ld %ld %ld",&a,&b,&c);
                    y=a*c;
                    z=y+z;
                }
            }
            printf("%ld\n",z);
        }
    }
    return 0;
}
