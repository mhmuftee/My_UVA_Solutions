#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int i,j,k,n,m,arr[100];
    char a[1005],b[1005];
    while(gets(a))
    {
        gets(b);

        int len_a=strlen(a);
        int len_b=strlen(b);
        for(i=0; i<100; i++)
            arr[i]=0;
        sort(a,a+len_a);
        sort(b,b+len_b);

        for(i=0; i<len_a; i++)
            arr[a[i]-96]++;

        for(i=0; i<len_b; i++)
        {
            if(arr[b[i]-96])
            {
                printf("%c",b[i]);
                arr[b[i]-96]--;
            }
        }
        printf("\n");
    }
    return 0;
}
