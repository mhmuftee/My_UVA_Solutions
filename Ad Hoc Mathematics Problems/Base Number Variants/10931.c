#include<stdio.h>
int main()
{
    int i,s,a[32];
    long  int x,n;
    while(1)
    {
        s=0;
        scanf("%lu",&x);
        if(x==0) break;
        i=1;
        n=0;
        for(;;)
        {
            if(x<2)
            {
                a[i]=1;
                n=n+1;
                break;
            }
            a[i]=x%2;
            x=x/2;
            n=i++;
        }
        printf("The parity of ");
        for(i=n; i>=1; i--)
        {
            printf("%d",a[i]);
            s=s+a[i];
        }
        printf(" is %d (mod 2).\n",s);
    }

    return 0;
}
