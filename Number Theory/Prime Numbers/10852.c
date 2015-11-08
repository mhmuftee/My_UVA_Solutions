#include<stdio.h>
#include<math.h>
int prime(long long int a)
{
    long int i,flag=0;
    for(i=2; i<=sqrt(a); i++)
        if(a%i==0)
        {
            flag=1;
            break;
        }
    if(flag==1) return 0;
    else return 1;
}

int main() {
    int n,i,j,x,k,cas;
    scanf("%d",&cas);
    for(i=0; i<cas; i++)
    {
        scanf("%d",&n);
        k=n/2+1;
        for(j=k; j<=n; j++)
        {
            x=prime(j);
            if(x==1)break;
        }
        printf("%d\n",j);
    }
    return 0;
}
