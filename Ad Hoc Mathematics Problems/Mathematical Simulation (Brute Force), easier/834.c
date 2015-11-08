
#include<stdio.h>
int main()
{
    int a,b,n,m;
    while (scanf("%d %d",&m,&n)!=EOF)
    {
        a=0;
        b=0;
        a=m/n;
        b=m%n;
        printf("[%d;",a);
        while(1)
        {
            m=n;
            n=b;
            a=m/n;
            b=m%n;
            if(b==0)
            {
                printf("%d]",a);
                break;
            }
            printf("%d,",a);
        }
        printf("\n");
    }
    return 0;
}
