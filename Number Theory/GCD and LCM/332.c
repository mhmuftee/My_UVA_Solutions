#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
long long GCD(long long a,long long b) {
    if (a%b==0) return b;
    else return GCD(b,a%b);
}
int main() {

    char s[15];

    long long i,j,k,a,b,c,len,z=1;
    double X=0,Y;

    while(scanf("%lld",&j)==1) {
        if(j<0)break;
        i=0;
        k=0;
        c=0;
        scanf("%s",&s);
        len=strlen(s);

        k=len-j-2;
        i=k+j;

        X=atof(s);
        if(j)
        {   Y=pow(10,k)*X+.000001;
            c=(int)Y;
        }

        X=pow(10,i)*X-c+.000001;
        a=(int)X;

        if(j)
        {   Y=pow(10,i)-pow(10,k)+.000001;
            b=Y;
        } else
        {   Y=pow(10,i)+.000001;
            b=(int)Y;

        }
        c=GCD(a,b);
        printf("Case %lld: %lld/%lld\n",z,a/c,b/c);
        z++;
    }

    return 0;
}
