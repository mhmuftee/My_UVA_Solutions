#include<stdio.h>
int main() {
    int i,n,sum1=0,sum2=0;
    struct c
    {
        char c[5];
    };
    typedef struct c ch;
    ch a[5],b,c,d;
    int j,squre_0=0,squre_2=0,sum;
    scanf("%d",&n);
    for(j=0; j<n; j++) {
        sum=0;
        sum1=0;
        sum2=0;
        squre_0=0;
        squre_2=0;
        for(i=0; i<4; i++) {
            scanf("%s",&a[i].c);
        }

        for(i=0; i<4; i++)

        {   squre_0=(a[i].c[0]-48)*2;
            squre_2=(a[i].c[2]-48)*2;
            sum1+=squre_0/10+squre_0%10+squre_2/10+squre_2%10;
            sum2+=(a[i].c[1]-48)+(a[i].c[3]-48);
        }
        sum=sum1+sum2;
        if(sum%10==0)printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
