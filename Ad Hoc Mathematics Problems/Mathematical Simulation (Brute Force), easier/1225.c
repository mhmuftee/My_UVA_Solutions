#include<stdio.h>
int main() {

    int i,j,k,n,m,cas,a[11];
    scanf("%d",&k);
    while(k--)
    {   scanf("%d",&cas);
        for(j=0; j<10; j++)a[j]=0;
        for(i=1; i<=cas; i++)
        {   n=i;
            while(n) {
                m=n%10;
                a[m]++;
                n=n/10;
            }
        }
        printf("%d",a[0]);
        for(j=1; j<10; j++)
            printf(" %d",a[j]);
        printf("\n");
    }
    return 0;
}

