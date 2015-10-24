#include<stdio.h>
int main()
{
    int n,i,m=0,k=1,j;
    char a[20];
    while(scanf("%s",a)!=EOF)
    {
        m=0;
        n=strlen(a);
        for(i=0; i<n; i++)
        {
            if(a[i]>=97)
            {
                m+=a[i]-96;
            }
            else
                m+=a[i]+26-64;
        }
        for(j=2; j<m; j++)
            if(m%j==0)
            {
                k=0;
                break;
            }
            else
                k=1;
        if(k==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
