#include<stdio.h>
int main() {
    int n;
    while(scanf("%d",&n)==1)
    {


        if(n==0)break;
        if(n==1 || n==2)printf("NO\n");
        else if(n%3==2)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
