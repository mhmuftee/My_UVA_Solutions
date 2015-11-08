#include<stdio.h>
long int happy(long int n)
{
    long int sum=0;
    for(;;)
    {
        sum=sum+(n%10)*(n%10);
        n=n/10;
        if(n<10)
        {
            sum=sum+n*n;
            break;
        }
    }
    return sum;
}

int main()
{
    long int i,x,y,n,sum=0,z=0;

    while(scanf("%lu %lu",&x,&y)!=EOF)
    {
        if(z!=0) printf("\n");

        int j;
        for(i=x; i<=y; i++)
        {
            sum=0;
            j=0;
            if(i==1) printf("%lu %lu\n",i,i);
            else
            {
                sum=happy(i);
                while(sum>=7)
                {
                    j++;
                    sum=happy(sum);
                }

                if(sum==1) printf("%lu %lu\n",i,j+2);
            }
        }

        z++;
    }
    return 0;
}
