#include<stdio.h>

int main() {
    long  a,b,c,d,L,i,count,f;
    while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&L)==5)
    {   if(a==0 && b==0 && c==0 && d==0 && L==0)break;
        count=0;
        for(i=0; i<=L; i++)
        {   f=a*i*i+b*i+c;
            if(f%d==0)
                count++;
        }
        printf("%ld\n",count);
    }
    return 0;
}
