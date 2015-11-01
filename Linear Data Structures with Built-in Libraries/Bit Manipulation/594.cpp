#include<cstdio>
#include<bitset>
using namespace std;

int main()
{

    int i,j,n;
    char s[100];
    while(gets(s) )
    {
        sscanf(s,"%d",&n);

        bitset <32> a = n,b;

        for( i=0,j=24; i<8; i++,j++)
            b[j]=a[i];
        for( i=8,j=16; i<16; i++,j++)
            b[j]=a[i];
        for( i=16,j=8; i<24; i++,j++)
            b[j]=a[i];
        for( i=24,j=0; i<32; i++,j++)
            b[j]=a[i];

        printf("%d converts to %d\n",n,(int)b.to_ulong());
    }

    return 0;
}
