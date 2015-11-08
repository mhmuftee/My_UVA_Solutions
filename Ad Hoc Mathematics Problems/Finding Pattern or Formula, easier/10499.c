#include<stdio.h>
int main() {
    long int i,n;
    char ch='%';
    while(scanf("%ld",&n)==1)
    {
        if(n<0)break;
        if(n==0 || n==1)printf("0%c\n",ch);
        else
            printf("%ld%c\n",n*25,ch);
    }
    return 0;
}
