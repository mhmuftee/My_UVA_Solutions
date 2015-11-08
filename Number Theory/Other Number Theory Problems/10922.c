#include<stdio.h>
#include<string.h>

int main()
{
    char num[1002];
    long int i,j,sum,k,len,deg;
    while(scanf("%s",num)==1)
    {
        len=strlen(num);
        if(len==1 && num[0]=='0')break;
        sum=0;
        deg=0;
        for(i=0; i<len; i++)
        {
            sum+=num[i]-48;
        }

        if(sum%9==0)
        {
            for(i=1;; i++)
            {
                j=sum;
                sum=0;
                if(j/10==0)
                {
                    printf("%s is a multiple of 9 and has 9-degree %ld.\n",num,i);
                    break;
                }
                else
                {
                    for(;;)
                    {
                        sum+=j%10;
                        j=j/10;
                        if(j==0)break;
                    }
                }

            }

        }
        else printf("%s is not a multiple of 9.\n",num);
    }
    return 0;
}
