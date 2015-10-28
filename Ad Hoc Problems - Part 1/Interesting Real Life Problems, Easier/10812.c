#include<stdio.h>
int main()
{
    int n,s,d,m,b,i=0;
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        scanf("%d%d",&s,&d);
        if(s<d)
            printf("impossible\n");
        else
        {
            if((s+d)%2==1)
                printf("impossible\n");
            else
            {
                m=(s+d)/2;
                b=(s-d)/2;

                printf("%d %d\n",m,b);
            }
        }
    }
    return 0;
}
