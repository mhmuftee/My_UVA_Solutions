#include<stdio.h>

int main() {

    char s[45],p,m,ch;
    int a,b,c,n,count=0;
    freopen("11878.txt","r",stdin);
    while(scanf("%s",s)==1) {
        n=sscanf(s,"%d%c%d%c%d",&a,&p,&b,&ch,&c);
        if(n==5)
        {
            if(p=='+') {
                if(a+b==c)count++;
            }
            else if(p=='-') {
                if(a-b==c)count++;
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
