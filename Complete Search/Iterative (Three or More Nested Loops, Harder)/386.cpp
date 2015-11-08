#include<stdio.h>

int main()
{
    long long a,b,c,d,i,j,k,l;

    for(i=6; i<=200; i++)
    {   a=i*i*i;
        for(j=2; j<i; j++)
        {   b=j*j*j;
            for(k=j; k<i; k++)
            {   c=k*k*k;
                for(l=k; l<i; l++)
                {   d=l*l*l;
                    if(a==(b+c+d))
                    {
                        printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",i,j,k,l);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
