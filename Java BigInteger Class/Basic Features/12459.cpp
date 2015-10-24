#include<stdio.h>

int main()
{
    long long n,save[81];
    save[2]=2,save[1]=1;
    for(n=3; n<=80; n++)
        save[n]=save[n-1]+save[n-2];

    for(; scanf("%lld",&n)==1,n;)
        printf("%lld\n",save[n]);
    return 0;
}
