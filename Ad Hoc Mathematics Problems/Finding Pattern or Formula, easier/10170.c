#include<stdio.h>
int main()
{
    long long int s,m,n,d,j;
    while(scanf("%llu %llu",&n,&d)!=EOF)
    {
        m=n;
        s=0;
        j=0;
        while(1)
        {
            s=s+n;
            if(s>=d)break;
            j++;
            n=n+1;
        }
        printf("%llu\n",m+j);
    }
    return 0;
}
