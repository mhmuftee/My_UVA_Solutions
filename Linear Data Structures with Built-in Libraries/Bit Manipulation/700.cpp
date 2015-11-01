#include<cstdio>
#include<cstring>

using namespace std;

int chek[10010];

int main()
{
    int cas,a,firstx,firsty,kas=0;

    while(scanf("%d",&cas)==1 && cas)
    {
        kas++;
        memset(chek,0,sizeof(chek));
        int found=-1;

        for(int j=0; j<cas; j++)
        {
            scanf("%d %d %d",&a,&firstx,&firsty);

            while(a<10000) {
                chek[a]++;
                if(chek[a]==cas && found==-1) {
                    found=a;
                }

                a=(firsty-firstx)+a;
            }
        }


        printf("Case #%d:\n",kas);

        if(found!=-1)
            printf("The actual year is %d.\n",found);
        else
            printf("Unknown bugs detected.\n");

        printf("\n");

    }

    return 0;
}
