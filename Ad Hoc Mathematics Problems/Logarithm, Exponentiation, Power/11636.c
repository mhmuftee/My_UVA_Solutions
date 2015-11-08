#include<stdio.h>
int main()
{
    int i=1,n,sum=0,c=0,k=1;
    while (scanf("%d",&n)==1)
    {
        c=0;
        i=1;
        if (n==1)
        {
            printf("Case %d: 0\n",k);
            k++;
        }
        else
        {
            if (n<0)break;
            else
                while (1)
                {
                    i*=2;
                    c++;
                    if (i>=n)
                    {
                        printf("Case %d: %d\n",k,c);
                        k++;
                        break;
                    }
                }
        }
    }
    return 0;
}
