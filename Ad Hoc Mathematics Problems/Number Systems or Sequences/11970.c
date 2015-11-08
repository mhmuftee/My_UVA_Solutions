#include<stdio.h>
#include<math.h>
int main() {

    long  N,X,i,j,k,n,m,a[100],cas;

    scanf("%ld",&cas);
    for(k=1; k<=cas; k++) {
        scanf("%ld",&N);


        j=0;
        for(i=1; i<sqrt(N); i++)
        {   n=N-i*i;
            if(n%i==0)a[j++]=n;
        }
        printf("Case %ld:",k);
        for(i=j-1; i>=0; i--)
            printf(" %ld",a[i]);
        printf("\n");
    }
    return 0;
}
