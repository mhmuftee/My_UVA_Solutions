#include<stdio.h>
int main()
{
    int i,x=0,n=0,a,b;
    while(1)
    {
        x=0;
        scanf("%d %d",&a,&b);
        if((a==0)&&(b==0))
            break;
        else
        {
            for(i=1; i<=b; i++)
            {
                n=i*i;
                if(n<=b)
                {   if(n>=a)
                        x=x+1;
                }
                else
                    break;
            }
            printf("%d\n",x);
        }
    }
    return 0;
}
