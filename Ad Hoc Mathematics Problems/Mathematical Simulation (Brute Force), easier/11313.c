#include<stdio.h>
int main() {
    int i,kase,n,m,x;
    scanf("%d",&kase);
    for(i=0; i<kase; i++)
    {   scanf("%d %d",&n,&m);
        x=(n-1)/(m-1);
        if(x*(m-1)==(n-1))
            printf("%d\n",x);
        else
            printf("cannot do this\n");
    }

    return 0;
}
