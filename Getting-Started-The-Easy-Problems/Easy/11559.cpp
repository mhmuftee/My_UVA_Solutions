#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int N,B,H,W,i,j,k,Hotel_cost,total_cost,min,Hotel[1000],count;

    while(scanf("%d %d %d %d",&N,&B,&H,&W)==4)
    {

        min=1000000;
        total_cost=0;int count=0;
        for(j=0; j<H; j++)
        {
            scanf("%d",&Hotel_cost);
            for(i=0; i<W; i++)
                scanf("%d",&Hotel[i]);


            for(i=0; i<W; i++)
                if(Hotel[i]>=N)
                {
                    total_cost=N*Hotel_cost;
                    count=1;break;
                }

            if(count)
            if(total_cost<min)
                min=total_cost;


        }
        if(min<=B)
            printf("%d\n",min);
        if(total_cost==0|| min>B)
            printf("stay home\n");
    }
    return 0;
}
