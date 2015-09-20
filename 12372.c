#include<stdio.h>
int main(void)
{
    int a,b,c,cas,i;
    scanf("%d",&cas);
    for(i=1; i<=cas; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
