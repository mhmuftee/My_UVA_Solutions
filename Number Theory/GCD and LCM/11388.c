#include<stdio.h>
int main() {
    long int G,H;
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%lu %lu",&G,&H);
        if(H%G==0)
            printf("%lu %lu\n",G,H);
        else
            printf("-1\n");
    }
    return 0;
}
