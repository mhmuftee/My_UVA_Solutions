#include<stdio.h>
#include<string.h>

struct Dacode {
    int gi;
    char gc;
};
typedef struct Dacode D;

unsigned long long int fibo[100]= {0,1,2,3,5,8,13,21,34,55,
                                   89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,
                                   75025,121393,196418,317811,514229,
                                   832040,1346269,2178309,3524578,
                                   5702887,9227465,14930352,24157817,
                                   39088169,63245986,102334155,165580141,
                                   267914296,433494437,701408733,1134903170,1836311903,
                                  };
int main() {
    long int n,i,j,kase,k,lenc,max;
    D Da[50];

    scanf("%ld",&kase);
    while(kase--) {
        scanf("%ld",&n);
        char c[100],d[50];
        for(i=0; i<=50; i++)
            d[i]=' ';
        for(i=1; i<=n; i++)
            scanf("%ld",&Da[i].gi);
        max=0;
        for(i=1; i<=n; i++)
            if(Da[i].gi>max)max=Da[i].gi;

        scanf("\n");
        gets(c);
        lenc=strlen(c);
        j=1;
        for(i=0; i<=lenc; i++)
        {
            if(c[i]>='A' && c[i]<='Z')
            {
                Da[j].gc=c[i];
                j++;
            }
        }
        for(j=1; j<=50; j++)
            if(fibo[j]==max)k=j;
        for(j=1; j<=50; j++)
            for(i=1; i<=n; i++)
                if(Da[i].gi==fibo[j])
                    d[j]=Da[i].gc;

        for(i=1; i<=k; i++)
            printf("%c",d[i]);
        printf("\n");
    }
    return 0;
}
