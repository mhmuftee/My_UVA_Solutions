#include<stdio.h>
#include<string.h>
int main() {

    int i,j,n,m,cas;
    char a[1000];

    scanf("%d",&cas);
    for(j=1; j<=cas; j++)
    {   scanf("%d",&m);
        getchar();
        if(j>1)printf("\n");
        printf("Case %d:\n",j);
        while(m--) {
            gets(a);
            n=strlen(a);
            a[n]='A';
            a[n+1]='\0';
            for(i=0; i<n; i++)
                if(a[i]==' '&& a[i+1]==' ')
                    continue;
                else
                    printf("%c",a[i]);

            printf("\n");
        }
    }
    return 0;
}
