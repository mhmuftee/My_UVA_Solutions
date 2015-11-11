#include<stdio.h>

int main()
{
    long int n,p,q,x;
    int i,j,flag;

    while(scanf("%ld",&n)==1 && n)
    {
        flag=0;
        for(i=1; i<=100; i++)
        {
            p=i*i*i;
            for(j=i+1; j<=100; j++)
            {
                q=j*j*j;
                x=q-p;
                if(x==n)
                {
                    flag=1;
                    break;
                }
                if(x>n)
                    break;
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            printf("%d %d\n",j,i);
        else
            printf("No solution\n");
    }
    return 0;
}


