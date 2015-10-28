#include<stdio.h>
#include<string.h>
int main() {
    char ch,c[105][105];
    int i,j,k,n,m,p;
    p=1;

    int h=1;
    while(scanf("%d %d",&m,&n)!=EOF) {

        if(m==0 && n==0)break;
        for(i=0; i<=m+1; i++) {
            for(j=0; j<=n+1; j++)
                c[i][j]='1';
        }

        scanf("%c",&ch);

        for(i=1; i<=m; i++) {
            for(j=1; j<=n; j++)
                scanf("%c",&c[i][j]);
            scanf("%c",&ch);
        }


        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
                if(c[i][j]=='.')
                    c[i][j]='0';


        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
                if(c[i][j]=='0')
                {
                    if(c[i][j+1]=='*') {
                        c[i][j]++;
                    }
                    if (c[i][j-1]=='*') {
                        c[i][j]++;
                    }
                    if(c[i-1][j]=='*') {
                        c[i][j]++;
                    }
                    if(c[i+1][j]=='*') {
                        c[i][j]++;
                    }
                    if(c[i-1][j+1]=='*') {
                        c[i][j]++;
                    }
                    if(c[i-1][j-1]=='*') {
                        c[i][j]++;
                    }
                    if(c[i+1][j-1]=='*') {
                        c[i][j]++;
                    }
                    if(c[i+1][j+1]=='*') {
                        c[i][j]++;
                    }

                }
        if(p!=1)printf("\n");
        printf("Field #%d:\n",p);
        for(i=1; i<=m; i++) {
            for(j=1; j<=n; j++)
                printf("%c",c[i][j]);
            printf("\n");
        }
        p++;
    }

    return 0;
}
