#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000],b[10000],c[10000];
    int i,n,z[10000],p,q,j,k,u,s;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)break;
        scanf("%s %s",a,b);
        printf("Round %d\n",n);
        p=strlen(a);
        q=strlen(b);
        for(i=0; i<=p; i++) z[i]=0;
        s=0;
        k=0;

        for(i=0; i<q; i++)
        {
            u=0;
            for(j=1; j<=s; j++)
                if(b[i]==c[j]) {
                    u=1;
                    break;
                }
            if(u==1)continue;
            s++;
            c[s]=b[i];
            u=0;
            u=0;
            for(j=1; j<=s; j++)
                if(b[i]==c[j]) {
                    u=1;
                    break;
                }
            if(u==1)continue;
            s++;
            c[s]=b[i];
            u=0;
            for(j=0; j<p; j++)
                if(b[i]==a[j]) {
                    z[j]=1;
                    u=1;
                }
            if(u==0)k++;
            u=0;
            for(j=0; j<p; j++)
                if(z[j]==0)u=1;
            if(u==0)break;
        }

        if(k>6)printf("You lose.\n");
        else
        {
            u=0;
            for(j=0; j<p; j++)
                if(z[j]==0)u=1;
            if(u==1)printf("You chickened out.\n");
            else printf("You win.\n");
        }
    }
    return 0;
}
