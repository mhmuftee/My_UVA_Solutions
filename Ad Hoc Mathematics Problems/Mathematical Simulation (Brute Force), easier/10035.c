#include<stdio.h>
int main()
{
    long int m,n,a,b,c,f,g,j;
    while(scanf("%lu %lu",&m,&n)!=EOF)
    {
        if(m>=n)
        {
            a=m;
            b=n;
        }
        else
        {
            a=n;
            b=m;
        }
        j=0;
        f=0;
        c=0;
        if(a==0 && b==0) break;
        else
            while(1)
            {
                if(f==0)
                    c=a%10+b%10;
                else if(f==1)
                    c=a%10+b%10+1;
                if(c>=10)
                {
                    f=1;
                    j++;
                }
                else
                    f=0;
                c=0;
                if(b<10 && f==1)
                {
                    if(a<10) break;
                    else
                        while(a<10)
                        {
                            a=a/10;
                            if(a<10&&g==1)
                                c=a+1;
                            else
                                c=a%10+1;
                            if(c>=10)
                            {
                                g=1;
                                j++;
                            }
                            else
                            {
                                g=0;
                                break;
                            }
                            c=0;
                        }
                }
                if(b<10 && f==0)
                    break;
                a=a/10;
                b=b/10;
            }
        if(j==0)
            printf("No carry operation.\n");
        else if(j==1)
            printf("1 carry operation.\n");
        else
            printf("%lu carry operations.\n",j);
    }
    return 0;
}
