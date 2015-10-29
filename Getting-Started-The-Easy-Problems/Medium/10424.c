#include<stdio.h>
#include<string.h>
int ff(int a);
int main()
{
    int i,n,m,o;
    double p,s,s2,s3,q,r;
    char a[27],b[27],ch='%';

    while (gets(a))
    {
        s=0;
        s2=0;

        gets(b);


        n=strlen(a);
        m=strlen(b);


        for( i=0; i<n; i++)
        {
            if(a[i]>=65&&a[i]<=90)
            {
                s+=a[i]-64;
            }

            if(a[i]>=97&&a[i]<=122)
            {
                s+=a[i]-96;
                s+=a[i]-96;
            }
        }

        for( i=0; i<m; i++)
        {
            if(b[i]>=65&&b[i]<=90)
            {
                s2+=b[i]-64;
            }

            if(b[i]>=97&&b[i]<=122)
            {
                s2+=b[i]-96;
            }
        }
        q=ff(s);
        r=ff(s2);
        if(q>r)
            p=(r/q)*100;
        else
            p=(q/r)*100;
        printf("%.2lf %c\n",p,ch);
    }
    return 0;
}


int ff( int a)
{
    int sum=0;
    while(1)
    {

        sum=sum+a%10;
        if(a<10)
        {
            break;
            sum=sum+a;
        }
        a=a/10;
    }
    if(sum>=10)
        sum=sum+ff(sum);
    else
        return sum;
}
