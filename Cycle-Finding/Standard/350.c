#include<stdio.h>
int main() {
    long int i=0,j,Z,I,M,L,X;
    while(scanf("%lu %lu %lu %lu",&Z,&I,&M,&L)==4) {
        i++;
        if(Z==0&&I==0&&M==0&&L==0)break;
        j=0;
        X=(Z*X+I)%M;
        L=X;
        for(;;) {
            X=(Z*X+I)%M;
            j++;
            if(X==L)break;
        }
        printf("Case %lu: %lu\n",i,j);
    }
    return 0;
}
