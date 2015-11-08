#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, x, y,x1,y1;
    long long pre, post, ans;

    scanf("%d",&n);

    for( i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d",&x,&y,&x1,&y1);

        pre = (1 + (y + x)) * (y + x) / 2 + x;
        post = (1 + (y1 + x1)) * (y1 + x1) / 2 + x1;
        ans = post - pre;

        printf("Case %d: %llu\n",i,ans);
    }

}
