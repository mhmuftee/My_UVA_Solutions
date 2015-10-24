#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int i,m, n , a, index = 1;
    static int counter[1000001];
    char ar[1000001];
    while(scanf("%s",ar) != EOF)
    {
        int length = strlen(ar);
        for( i = 0; i < 1000001; i++)
            counter[i] = 0;
        for( i = 1; i < length; i++)
        {
            if(ar[i] != ar[i-1])
                counter[i] = counter[i-1] + 1;
            else
                counter[i] = counter[i-1];
        }
        printf("Case %d:\n",index++);
        scanf("%d",&a);
        for( i = 0; i < a; i++)
        {
            scanf("%d %d",&m,&n);
            if(counter[n] != counter[m])
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}
