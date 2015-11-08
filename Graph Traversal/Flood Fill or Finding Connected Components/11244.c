#include<stdio.h>
#include<string.h>

int main() {
    char ch,c[105][105];
    int i,j,k,n,m,count;

    while(scanf("%d %d",&m,&n) && m&& n) {
        count=0;
        if(m==0 && n==0)break;
        for(i=0; i<=m+1; i++) {
            for(j=0; j<=n+1; j++)
                c[i][j]='.';
        }

        scanf("%c",&ch);

        for(i=1; i<=m; i++) {
            for(j=1; j<=n; j++)
                scanf("%c",&c[i][j]);
            scanf("%c",&ch);
        }

        for(i=1; i<=m; i++)
            for(j=1; j<=n; j++)
                if(c[i][j]=='*')
                {
                    if(c[i][j+1]=='.')
                        if(c[i][j-1]=='.')
                            if(c[i-1][j]=='.')
                                if(c[i+1][j]=='.')
                                    if(c[i-1][j+1]=='.')
                                        if(c[i-1][j-1]=='.')
                                            if(c[i+1][j-1]=='.')
                                                if(c[i+1][j+1]=='.')
                                                    count++;
                }
        printf("%d\n",count);
    }
    return 0;
}

