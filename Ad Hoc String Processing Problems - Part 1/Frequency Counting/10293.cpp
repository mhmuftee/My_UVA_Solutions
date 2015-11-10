#include<cstdio>
#include<cstring>

using namespace std;

int main(void)
{   int s[35];
    char a[10000];
    int count = 0,i;
    for( i=0; i<=35; i++)
        s[i]=0;

    while(gets(a))
    {
        int len=strlen(a);
        if(a[0]=='#')
        {
            for( i=1; i<=35; i++)
                if(s[i])
                    printf("%d %d\n",i,s[i]);
            printf("\n");

            for( i=0; i<=35; i++)
                s[i]=0;
            count=0;
        }
        else
            for( i=0; i<=len; i++)
            {

                if(a[i]=='\''||a[i]=='-')
                {
                    continue;
                }
                if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
                    count++;

                else

                {   if(a[i]=='\0' && a[i-1]=='-')
                        count=count;
                    else
                    {   s[count]++;
                        count=0;
                    }
                }
            }
    }
    return 0;
}
