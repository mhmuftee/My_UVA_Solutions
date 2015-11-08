#include<cstdio>
int main()
{
    char a[105];
    int i,k,cas,n,len,cou=0;
    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {   cou=0;
        scanf("%d",&n);
        scanf("%s",a);
        for(i=0; i<n; i++)
        {
            if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.')
            {
                cou++;
                a[i]=a[i+1]=a[i+2]=' ';
            }
            if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='#')
            {
                cou++;
                a[i]=a[i+1]=' ';
            }

            if(a[i]=='.' && a[i+1]=='#' && a[i+2]=='.')
            {   a[i]=a[i+2]=' ';
                cou++;
            }

            if(a[i]=='.' && a[i+1]=='#' && a[i+2]=='#')
            {   a[i]=' ';
                cou++;
            }
        }
        printf("Case %d: %d\n",k,cou);
    }
    return 0;
}
