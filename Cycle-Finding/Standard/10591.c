#include<stdio.h>

int main()
{
    long int happy(long int n)
    {
        long int sum=0;
        for(;;)
        {
            sum=sum+(n%10)*(n%10);
            n=n/10;
            if(n<10) {
                sum=sum+n*n;
                break;
            }
        }
        while(sum>=10) {

            sum=happy(sum);
        }
        return sum;
    }
    long int i,a,n,sum=0;
    scanf("%lu",&a);
    for(i=1; i<=a; i++)
    {   sum=0;
        scanf("%lu",&n);
        sum=happy(n);

        if(sum==1) printf("Case #%lu: %lu is a Happy number.\n",i,n);
        else
            printf("Case #%lu: %lu is an Unhappy number.\n",i,n);
    }
    return 0;
}
