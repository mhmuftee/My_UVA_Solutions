#include <cstdio>
int main(void){
    int T, N, mile, juice, x, cnum = 0;
    scanf("%d",&T);
    for(int k=1;k<=T;k++){
        scanf("%d",&N);
        mile = juice = 0;
        for(int i = 0; i < N; ++i){
            scanf("%d",&x);
            mile += (x + 30)/30;
            juice += (x + 60)/60;
        }
        mile *= 10;
        juice *= 15;
        printf("Case %d: ",k);
        if(mile < juice) printf("Mile %d\n",mile);
        else if(juice < mile) printf("Juice %d\n",juice);
        else printf("Mile Juice %d\n",mile);
    }
    return 0;
}
