#include<stdio.h>
#include<math.h>
int a[9]= {2,3,5,7,13,17,19,31};
int b[3]= {11,23,29};

int main()
{
    int i,n;
    long long int m;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        if(n==2 || n==3 || n==5 ||n==7 || n==13 || n==17 || n==19 || n==31)
        {
            m=pow(2,n-1)*(pow(2,n)-1);
            printf("Perfect: %llu!\n",m);
        }
        else if(n==11 || n==23 || n==29)
            printf("Given number is prime. But, NO perfect number is available.\n");
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
