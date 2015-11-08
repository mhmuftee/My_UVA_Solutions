#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

char maze[105][105];

int main()
{
    int i,j,cas,N,M,S;

    while(scanf("%d %d %d",&N,&M,&S)==3 && N && M && S)
    {
        char initial;
        pair<int,int>D,E,ini,sec,third;
        for(i=0; i<N; i++)
            scanf("%s",maze[i]);

        for(i=0; i<N; i++)
            for(j=0; j<M; j++)
                if(maze[i][j]=='N' || maze[i][j]=='S' || maze[i][j]=='O' || maze[i][j]=='L')
                    ini.first=i,ini.second=j,initial=maze[i][j],maze[i][j]='.';

        char st[500010];
        scanf("%s",st);
        int count=0,len=strlen(st);
        for(i=0; i<len; i++)
        {
            sec.first=sec.second=third.first=third.second=0;

            if(st[i]=='D')
            {
                switch(initial)
                {
                case 'N':
                {
                    initial='L';
                    break;
                }
                case 'S':
                {
                    initial='O';
                    break;
                }
                case 'L':
                {
                    initial='S';
                    break;
                }
                case 'O':
                {
                    initial='N';
                    break;
                }
                }

            }
            else if (st[i]=='E')
            {
                switch(initial)
                {
                case 'N':
                {
                    initial='O';
                    break;
                }
                case 'S':
                {
                    initial='L';
                    break;
                }
                case 'O':
                {
                    initial='S';
                    break;
                }
                case 'L':
                {
                    initial='N';
                    break;
                }
                }

            }
            else
            {
                if(initial=='N')
                    sec.first=-1,sec.second=0;
                else if(initial=='S')
                    sec.first=1,sec.second=0;
                else if(initial=='L')
                    sec.first=0,sec.second=1;
                else
                    sec.first=0,sec.second=-1;

                third.first=ini.first+sec.first;
                third.second=ini.second+sec.second;

                if(third.first>=0 && third.second>=0 && third.first<N && third.second<M && maze[third.first][third.second]!='#')
                {

                    if(maze[third.first][third.second]=='*')
                    {
                        maze[third.first][third.second]='.';
                        count++;
                        ini=third;
                    }
                    else if(maze[third.first][third.second]=='.')
                        ini=third;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
