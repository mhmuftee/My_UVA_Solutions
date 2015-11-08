#include<stdio.h>
int main()
{
    unsigned  long int p,q,r,l,i;
    while(1)
    {
        scanf("%lu",&l);
        p=0;
        q=1;
        if(l==0) break;
        for(i=1; i<=l; i++)
        {
            r=p+q;
            printf("%lu\n",r);
            p=q;
            q=r;
        }
    }
    return 0;
}
