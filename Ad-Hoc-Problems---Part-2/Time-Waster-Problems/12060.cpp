#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

long gcd(long a,long b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main()
{

    int n,kase = 0;


    while(scanf("%d",&n)==1 && n)
    {

        long sum = 0,number;
        bool Minus = false ;

        printf("Case %d:\n",++kase);

        for(int i = 0; i<n; i++)
        {
            scanf("%ld",&number);
            sum += number;
        }

        if(sum<0)
        {
            Minus = true;
            sum *=-1;
        }

        if(sum%n==0)
        {
            if(Minus)
                printf("- ");
            printf("%ld\n",sum/n);
        }
        else
        {
            long c,b = sum - (sum/n * n);
            long Gcd = gcd(b,n);
            b/=Gcd;
            c=n/Gcd;
            int offset = 0;
            if(Minus) offset += 2;

            int num_Of_dash = int(log10(c)+1);

            offset += num_Of_dash;

            if(sum>n) offset += int(log10(sum/n) +1);

            cout.width(offset);
            cout << std::right << b << '\n';
            if(Minus) printf("- ");
            if(sum>n) printf("%ld",sum/n);
            for(int j = 0; j<num_Of_dash; j++)
                printf("-");
            printf("\n");
            cout.width(offset);
            cout << std::right << c << '\n';

        }
    }

    return 0;
}
