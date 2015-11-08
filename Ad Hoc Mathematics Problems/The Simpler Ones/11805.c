#include<stdio.h>
int main() {
    int a,b,c,i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {   scanf("%d %d %d",&a,&b,&c);
        j=0;
        if(c>=a) {
            j=c%a+b;
            if(j>a)printf("Case %d: %d\n",i,j%a);
            else
                printf("Case %d: %d\n",i,j);
        }
        else {
            if(b+c>a)
                printf("Case %d: %d\n",i,c+b-a);
            else if(b+c==a)
                printf("Case %d: %d\n",i,a);
            else if(b+c<a)
                printf("Case %d: %d\n",i,b+c);
        }
    }
    return 0;
}

