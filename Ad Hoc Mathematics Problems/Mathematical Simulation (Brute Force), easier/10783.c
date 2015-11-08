#include<stdio.h>
int main()
{
    int a,b,c,i,j,sum=0;
    scanf("%d",&c);
    for (i=1; i<=c; i++)
    {   sum=0;
        scanf("%d %d",&a,&b);
        for (j=a; j<=b; j++)
            if (j%2==1)
                sum=sum+j;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
