#include<stdio.h>
int main() {
    int H1,H2,M1,M2,k;
    while(1) {
        H1=0;
        H2=0;
        M1=0;
        M2=0;
        k=0;
        scanf("%d %d %d %d",&H1,&M1,&H2,&M2);

        if(H1==0&&H2==0&&M1==0&&M2==0)break;
        if(H1<H2)printf("%d\n",H2*60+M2-H1*60-M1);
        else if(H1>H2) {
            k=1440-H1*60-M1;
            printf("%d\n",H2*60+M2+k);
        }
        else if(H1=H2)
            if(M1<=M2)printf("%d\n",M2-M1);
            else if(M1>M2)printf("%d\n",1440-M1+M2);
    }
    return 0;
}
