#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char maze[105][105];

int main()
{
    int i,j,cas,N,M,a,b;
    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%d %d",&M,&N);
        getchar();

        for(i=0; i<M; i++)
            gets(maze[i]);

        scanf("%d %d",&a,&b);
        getchar();
        a--;
        b--;

        string s;
        char initial='N';

        while(getline(cin,s) && s!="")
        {
            int len=s.size();
            for(i=0; i<len; i++)
            {
                int x=0,y=0,sec=0,secs=0;
                if(s[i]=='Q')
                {
                    printf("%d %d %c\n",a+1,b+1,initial);
                    break;
                }
                if(s[i]=='R')
                {
                    switch(initial)
                    {
                    case 'N':
                    {
                        initial='E';
                        break;
                    }
                    case 'S':
                    {
                        initial='W';
                        break;
                    }
                    case 'E':
                    {
                        initial='S';
                        break;
                    }
                    case 'W':
                    {
                        initial='N';
                        break;
                    }
                    }
                }
                else

                    if(s[i]=='L')
                    {
                        switch(initial)
                        {
                        case 'N':
                        {
                            initial='W';
                            break;
                        }
                        case 'S':
                        {
                            initial='E';
                            break;
                        }
                        case 'E':
                        {
                            initial='N';
                            break;
                        }
                        case 'W':
                        {
                            initial='S';
                            break;
                        }
                        }
                    }

                    else
                    {
                        if(initial=='N')
                            sec=-1,secs=0;
                        else if(initial=='S')
                            sec=1,secs=0;
                        else if(initial=='E')
                            sec=0,secs=1;
                        else
                            sec=0,secs=-1;

                        x=a+sec;
                        y=b+secs;

                        if(maze[x][y]!='*')
                            a=x,b=y;
                    }
            }
        }

        if(cas)
            printf("\n");

    }

    return 0;
}
