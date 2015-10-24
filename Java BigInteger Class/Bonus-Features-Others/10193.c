#include<stdio.h>
#include<string.h>
#include<math.h>
long GCD(long a,long b) {
    if (a%b==0) return b;
    else return GCD(b,a%b);
}
int main() {

    long a,b,c;
    char S1[32],S2[32];
    int i,j,k,cas,len1,len2;

    scanf("%d",&cas);
    for(i=1; i<=cas; i++)
    {
        scanf("%s%s",&S1,&S2);

        len1=strlen(S1);
        len2=strlen(S2);
        a=0;
        b=0;
        for(j=len1-1,k=0; j>=0; j--,k++)

            a=a+(S1[j]-48)*pow(2,k);
        for(j=len2-1,k=0; j>=0; j--,k++)

            b=b+(S2[j]-48)*pow(2,k);

        c=GCD(a,b);
        if(c==1)
            printf("Pair #%d: Love is not all you need!\n",i);
        else
            printf("Pair #%d: All you need is love!\n",i);

    }
    return 0;
}
