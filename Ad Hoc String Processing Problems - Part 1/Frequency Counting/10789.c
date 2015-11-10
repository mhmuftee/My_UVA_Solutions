#include<stdio.h>
#include<math.h>
#include<string.h>

int i,j,k,a[3000],n,cas,b[3000],p,q,ii;
char s[3000];
void sev()
{
    a[0]=0;
    for(i=2; i<2005; i++)a[i]=1;
    for(i=2; i<45; i++)
        if(a[i]==1)
            for(j=2*i; j<2005; j+=i)
                a[j]=0;


}
int main()
{
    sev();
    scanf("%d",&cas);
    for(ii=1; ii<=cas; ii++)
    {
        scanf("%s",s);
        n=strlen(s);
        for(i=0; i<=125; i++)b[i]=0;
        for(i=0; i<n; i++)
        {
            p=s[i];
            b[p]++;
        }
        printf("Case %d: ",ii);
        p=0;

        for(i=0; i<=125; i++)
            if(a[b[i]]==1)
            {
                p=1;
                printf("%c",i);
            }
        if(p==0)printf("empty");
        printf("\n");
    }
    return 0;
}
