#include<stdio.h>

int main()
{
    unsigned int i,x,n,s,result;

    while(scanf("%u",&n)==1 && n)
        if(n==1)printf("1\n");
        else
        {
            x=1;
            result=0;
            s=0;
            while(1)
            {
                if(x>=n)break;
                x=x*2;
                s=x%n;
                result=n-s;
            }
            printf("%u\n",result);
        }
    return 0;
}
