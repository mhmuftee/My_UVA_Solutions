#include<stdio.h>
int main()
{
    long int ini,lim,kase=1,A;
    while(scanf("%ld%ld",&ini,&lim)==2)
    {
        A=ini;
        if(ini<0 && lim<0) break;
        long int term=1;
        while(1)
        {
            if (ini==1) break;
            else if(ini%2==0) ini=ini/2;
            else ini=3*ini+1;
            if(ini>lim)break;
            term++;
        }
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",kase,A,lim,term);
        kase++;
    }
    return 0;
}
