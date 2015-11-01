#include<stdio.h>
#include<math.h>

int main()
{
    long price[50];
    long i,j,k,cas,n,limit,t,max=5000000,chek,s;

    scanf("%ld",&cas);

    for(k=0; k<cas; k++)
    {
        limit=0;
        while(scanf("%ld",&n)==1 && n) {
            price[limit++]=n;
        }

        for(i=0; i<limit-1; i++)
            for(j=i+1; j<limit; j++)
                if(price[i]<price[j])
                {
                    t=price[i];
                    price[i]=price[j];
                    price[j]=t;
                }

        chek=0;
        s=0;
        for(i=0; i<limit; i++)
        {   s=s+2*pow(price[i],i+1);
            if(s>max) {
                chek=1;
                break;
            }
        }

        if(chek)
            printf("Too expensive\n");
        else
            printf("%ld\n",s);
    }

    return 0;
}
