#include<cstdio>
#include<cstring>
#include<cmath>
#define max 1000000
using namespace std;

int main()
{
    int i;

    char c[max+5];

    while(scanf("%s",c)==1)
    {
        if(c[0]=='0')
            break;

        int s,len=strlen(c);
        int k=0;
        if(len%2==0)
        {
            s=10*(c[0]-48)+(c[1]-48);
            k=1;
        }
        else
            s=c[0]-48;

        if(k)len-=2;
        else
            len--;
        len=len/2;
        s=(int)sqrt(s);

        printf("%d",s);

        for(i=0; i<len; i++)
            printf("0");
        printf("\n");
    }
    return 0;
}
