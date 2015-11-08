#include<cstdio>
#include<queue>
using namespace std;

pair <int ,int>u,v,start,end;
int D[1005][1005];
bool s[1005][1005];

int main()
{
    int i,j,k,R,C,n,m,x,y;
    while(scanf("%d %d",&R,&C)==2 && R && C)
    {
        for(i=0; i<R; i++)
            for(j=0; j<C; j++)
                s[i][j]=false,D[i][j]=0;

        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d %d",&x,&m);
            for(j=0; j<m; j++)
                scanf("%d",&y),
                      s[x][y]=true;
        }

        scanf("%d %d",&m,&n);
        start=make_pair(m,n);
        scanf("%d %d",&m,&n);
        end=make_pair(m,n);

        queue<pair<int,int> > Q;

        Q.push(start);
        D[start.first][start.second]=0;
        s[start.first][start.second]=true;

        while(!Q.empty())
        {
            u=Q.front();
            Q.pop();
            m=u.first;
            n=u.second;

            for(i=0; i<4; i++)
            {
                x=m;
                y=n;
                if(i==0)x--;
                if(i==1)y--;
                if(i==2)x++;
                if(i==3)y++;
                if(x>=0 && y>=0 && x<R && y<C)
                {
                    v.first=x;
                    v.second=y;
                    if(!s[x][y])
                    {
                        D[x][y]=D[m][n]+1;
                        s[x][y]=true;
                        Q.push(v);

                        if(v==end)
                        {
                            while(!Q.empty())
                                Q.pop();
                            break;
                        }
                    }
                }
            }
        }
        printf("%d\n",D[end.first][end.second]);
    }
    return 0;
}
