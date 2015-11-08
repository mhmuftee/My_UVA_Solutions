#include<stdio.h>
int main()
{
    int a,z,b,c,d,n,i;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d %d",&z,&c,&d);

        a=z+c;
        b=0;
        while(a>(d-1))
        {
            b+=a/d;
            a=(a/d)+(a%d);
        }

        printf("%d\n",b);
        n--;
    }
    return 0;
}
