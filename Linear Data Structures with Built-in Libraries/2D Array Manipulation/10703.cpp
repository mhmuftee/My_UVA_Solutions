#include<cstdio>
using namespace std;
int main() {

    int W,H,N,i,j,x1,x2,y1,y2,k,max_x,min_x,max_y,min_y;
    long long count;

    while(scanf("%d %d %d",&W,&H,&N)==3)
    {
        if(!W&&!H&&!N)
            break;
        char board[505][505];
        for(i = 0; i <= W; i++)
            for(j = 0; j <= H; j++)
                board[i][j] = '0';
        for(k = 0; k < N; k++ )
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            if(x1>x2)
            {
                max_x = x1;
                min_x = x2;
            }
            else
            {
                max_x = x2;
                min_x = x1;
            }
            if(y1>y2)
            {
                max_y = y1;
                min_y = y2;
            }
            else
            {
                max_y = y2;
                min_y = y1;
            }
            for(i = min_x; i <=max_x; i++)
            {
                for(j = min_y; j <=max_y; j++)
                {
                    board[i][j] = '1';
                }
            }
        }
        count = 0;
        for(i = 1; i <= W; i++)
            for(j = 1; j <= H; j++)
                if(board[i][j]=='0')
                    count++;
        if(!count)
            printf("There is no empty spots.\n");
        else if(count==1)
            printf("There is one empty spot.\n");
        else
            printf("There are %lld empty spots.\n",count);
    }
    return 0;
}

