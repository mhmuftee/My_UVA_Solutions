#include<cstdio>
#include<cstring>
using namespace std;

int R,C,M,N,sum;

int Maze[205][205];

bool taken[205][205];

void check(int x,int y)
{
    if(Maze[x+M][y+N]==1 && x+M>=0 && x+M<R && y+N>=0 && y+N<C && !taken[x+M][y+N])
        sum++,taken[x+M][y+N]=1;
    if(Maze[x+M][y-N]==1 && x+M>=0 && x+M<R && y-N>=0 && y-N<C && !taken[x+M][y-N])
        sum++,taken[x+M][y-N]=1;
    if(Maze[x-M][y+N]==1 && x-M>=0 && x-M<R && y+N>=0 && y+N<C && !taken[x-M][y+N])
        sum++,taken[x-M][y+N]=1;
    if(Maze[x-M][y-N]==1 && x-M>=0 && x-M<R && y-N>=0 && y-N<C && !taken[x-M][y-N])
        sum++,taken[x-M][y-N]=1;
    if(Maze[x+N][y+M]==1 && x+N>=0 && x+N<R && y+M>=0 && y+M<C && !taken[x+N][y+M])
        sum++,taken[x+N][y+M]=1;
    if(Maze[x+N][y-M]==1 && x+N>=0 && x+N<R && y-M>=0 && y-M<C && !taken[x+N][y-M])
        sum++,taken[x+N][y-M]=1;
    if(Maze[x-N][y+M]==1 && x-N>=0 && x-N<R && y+M>=0 && y+M<C && !taken[x-N][y+M])
        sum++,taken[x-N][y+M]=1;
    if(Maze[x-N][y-M]==1 && x-N>=0 && x-N<R && y-M>=0 && y-M<C && !taken[x-N][y-M])
        sum++,taken[x-N][y-M]=1;
}

void Fill(int x,int y)
{
    if(x<0 || y<0 || x>=R || y>=C || Maze[x][y])
        return;
    Maze[x][y]=1;

    Fill(x+M,y+N);
    Fill(x+M,y-N);
    Fill(x-M,y+N);
    Fill(x-M,y-N);
    Fill(x+N,y+M);
    Fill(x+N,y-M);
    Fill(x-N,y+M);
    Fill(x-N,y-M);
}

int main()
{
    int Kas,Cas;

    scanf("%d",&Kas);

    for(int cas=1; cas<=Kas; cas++)
    {
        scanf("%d %d %d %d",&R,&C,&M,&N);

        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
                Maze[i][j]=0;

        scanf("%d",&Cas);

        while(Cas--)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            Maze[x][y]=2;
        }

        Fill(0,0);

        int even=0;
        int odd=0;

        for(int i=0; i<R; i++)
        {
            for(int j=0; j<C; j++)
            {
                if(Maze[i][j]==1)
                {
                    sum=0;
                    memset(taken,0,sizeof(taken));
                    check(i,j);
                    if(sum%2==0)
                        even++;
                    else
                        odd++;
                }
            }
        }
        printf("Case %d: %d %d\n",cas,even,odd);
    }
    return 0;
}
