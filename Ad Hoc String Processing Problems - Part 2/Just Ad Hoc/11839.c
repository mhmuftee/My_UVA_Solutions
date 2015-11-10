#include<stdio.h>

int main(void)
{
    int a[6],i,j,n,count,m;
    while(scanf("%d",&n)==1 && n)
    {
        while(n--)
        {
            for(i=0; i<5; i++)
                scanf("%d",&a[i]);
            count=0;
            for(i=0; i<5; i++)
                if(a[i]<=127)
                    count++;
            if(count>1 || !count)
                printf("*\n");

            if(count==1)
            {
                for(i=0; i<5; i++)
                    if(a[i]<=127)
                        m=i;
                printf("%c\n",m+65);
            }
        }
    }
    return 0;
}
