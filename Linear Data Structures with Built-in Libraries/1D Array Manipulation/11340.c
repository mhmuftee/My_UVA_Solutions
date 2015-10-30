#include<stdio.h>
#include<string.h>
struct cha
{
    char ca;
    int a;
};
typedef struct cha cost;
int main() {

    int i,j,k,M,n,s=0,len,case1,case2;
    char buffer[10100];
    double d=0;
    cost c[128];
    scanf("%d",&n);
    for(k=0; k<n; k++) {
        d=0;
        s=0;
        len=0;
        scanf("%d",&case1);

        for(i=1; i<=case1; i++)
        {
            scanf("\n%c %d",&c[i].ca,&c[i].a);
        }
        scanf("%d\n", &M);
        while (M--) {
            gets(buffer);
            len=strlen(buffer);


            for(i=1; i<=case1; i++) {
                for(j=0; j<len; j++)
                    if(c[i].ca==buffer[j])
                        s+=c[i].a;
            }
        }
        d=(double)s/100;
        printf("%.2lf$\n",d);
    }

    return 0;
}
