#include<stdio.h>
#include<string.h>
int main() {
    int i,j,x,b,d,n,m;
    char a[101];

    while(scanf("%d",&n)!=EOF) {
        if(n==0) break;

        scanf("%s",a);
        m=0;
        b=0;
        d=0;
        m=strlen(a);
        x=m/n;
        b=x;
        for(j=0; j<n; j++)
        {   for(i=b-1; i>=d; i--)
                printf("%c",a[i]);
            b=b+x;
            d=d+x;
        }

        printf("\n");
    }



    return 0;
}
