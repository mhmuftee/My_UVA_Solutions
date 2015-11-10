#include<stdio.h>

int main() {
    int i,j,k,m,n,t,x=0,a[1000];
    scanf("%d",&m);
    for(k=0; k<m; k++) {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        x=0;
        for(i=0; i<n-1; i++)
            for(j=i+1; j<n; j++)
                if(a[j]<a[i]) {
                    x++;
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
        printf("Optimal train swapping takes %d swaps.\n",x);
    }
    return 0;
}
