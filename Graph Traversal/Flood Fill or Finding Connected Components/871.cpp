#include <cstdio>
#include <cstring>
#define maxi 25
using namespace std;
int m,n,sum;
char grid [maxi + 5] [maxi + 5];

void dfs (int r, int c)
{
    if ( r < 0 || r >= m || c < 0 || c >= n || grid [r] [c] == '0' )
        return;

    grid [r] [c] = '0';
    sum++;
    dfs (r - 1, c);
    dfs (r - 1, c + 1);
    dfs (r, c + 1);
    dfs (r + 1, c + 1);
    dfs (r + 1, c);
    dfs (r + 1, c - 1);
    dfs (r, c - 1);
    dfs (r - 1, c - 1);
}

int main ()
{
    scanf ("%d",&m);
    char inp[maxi +5];
    m=0;
    int k=0;

    while (gets(inp) ) {
        if(inp[0]=='\0')
        {
            int max=0;
            n=m;
            for ( int i = 0; i < m; i++ ) {
                for ( int j = 0; j < n; j++ ) {
                    if ( grid [i] [j] == '1' ) {
                        sum=0;
                        dfs (i, j);
                        if(sum>max)
                            max=sum;
                    }
                }
            }
            if(k)
                printf ("%d\n\n", max);
            m=0;
            for(int i=0; i<=26; i++)
                for(int j=0; j<=26; j++)
                    grid[i][j]='/';
        }
        if(inp[0]!='\0')
        {
            strcpy(grid[m],inp);
            ++m;
            k=1;
        }
    }
    int max=0;
    n=m;
    for ( int i = 0; i < m; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            if ( grid [i] [j] == '1' ) {
                sum=0;
                dfs (i, j);
                if(sum>max)
                    max=sum;
            }
        }
    }
    if(k)
        printf ("%d\n", max);
    return 0;
}
