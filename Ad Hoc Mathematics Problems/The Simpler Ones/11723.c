#include<stdio.h>
int main()
{

    long int i=0,R,N,D,E;
    while (scanf("%lu %lu",&R,&N)==2)
    {
        if(R==0 && N==0) break;
        D=R/N;
        E=R%N;
        printf("Case %lu: ",i+1);

        if(D>26)printf("impossible\n");
        else if(R%N==0)
            printf("%lu\n",D-1);
        else
            printf("%lu\n",D);
        i++;
    }
    return 0;
}
