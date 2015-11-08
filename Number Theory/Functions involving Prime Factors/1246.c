#include<stdio.h>
#include<math.h>

int factor_number(int n)
{
    int i=1,s=1;
    if(n==1)return s;
    while(1)
    {
        if(n<=i)
            break;
        if(n%i==0)
            s++;
        i++;

    }
    return s;
}

int prime_check(int n)
{
    if(n==1)return 0;
    int i,count=0;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
        {
            count=1;
            break;
        }
    if(count)
        return 0;
    else
        return 1;
}

int main()
{
    int I,J,K,cas,kas,a,b,n,m,space,count;
    scanf("%d",&cas);
    for(I=0; I<cas; I++)
    {
        scanf("%d %d",&a,&b);
        space=0;
        count=0;
        for(J=a; J<=b; J++)
        {
            n=factor_number(J);
            m=prime_check(n);

            if(m)
            {   if(space)
                    printf(" ");
                printf("%d",J);
                space=1;
            }
            else
                count++;
            if(count==(b+1-a))
                printf("-1");
        }
        printf("\n");
    }
    return 0;
}
