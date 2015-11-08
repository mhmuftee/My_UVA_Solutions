#include<stdio.h>
#include<math.h>
int main(){
    long long int i,n,count;

long long int a[34];

    for(i=2;i<=30;i++)
    {
    a[i]=pow(2,i)-1;

    }

    while(scanf("%lld",&n)&& n)
    {   count=0;
        for(i=2;i<=30;i++)
        if(a[i]==n)
            count=1;
        if(count==1)
        printf("Bob\n");
        else
        printf("Alice\n");
    }
    return 0;
}
