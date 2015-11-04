#include<stdio.h>
#include<string.h>

struct n
{
    char M[24];
    long L,H;
};

typedef struct n a;

int main()
{
    a ar[10000];
    long Q,n,m,i,j,k,l=0;
    int cas,count;

    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%ld",&n);
        for(i=0; i<n; i++)
            scanf("%s %ld %ld",&ar[i].M,&ar[i].L,&ar[i].H);
        scanf("%ld",&m);
        if(l!=0)
            printf("\n");
        for(i=0; i<m; i++)
        {
            count=0;
            scanf("%ld",&Q);
            for(j=0; j<n; j++)
            {
                if(Q>=ar[j].L && Q<=ar[j].H)
                {
                    count++;
                    k=j;
                }
                if(count==2)break;
            }

            if(count==0 || count >=2)
                printf("UNDETERMINED\n");
            else if(count==1)
                printf("%s\n",ar[k].M);

        }


        l++;
    }

    return 0;
}
