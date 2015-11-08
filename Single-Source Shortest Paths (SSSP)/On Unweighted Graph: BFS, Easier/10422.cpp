#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char predefined[5][5]= { {'1','1','1','1','1'},
    {'0','1','1','1','1'},
    {'0','0','X','1','1'},
    {'0','0','0','0','1'},
    {'0','0','0','0','0'}
};
int dir[8][2]= {{-2,-1},{-2,1},{2,-1},{2,1},{1,-2},{-1,-2},{1,2},{-1,2}};

char input[5][5];

int MIN,Max,Count=0;

bool chek()
{
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            if(input[i][j]!=predefined[i][j])
                return false;

    return true;
}


void Swap(int x,int y,int a,int b)
{
    char c=input[x][y];
    input[x][y]=input[a][b];
    input[a][b]=c;
}

void dfs(int firstx,int firsty,int secondx,int secondy)
{
    if(Count>=11)
        return;

    if(chek())
    {
        if(Count<Max)Max=Count;
    }

    for(int i=0; i<8; i++)
    {
        int newx=firstx+dir[i][0];
        int newy=firsty+dir[i][1];

        if(newx>=0 && newy>=0 && newx<5 && newy<5 && (newx!=secondx || newy!=secondy))
        {
            Swap(newx,newy,firstx,firsty);
            Count++;
            dfs(newx,newy,firstx,firsty);
            Count--;
            Swap(firstx,firsty,newx,newy);
        }
    }
}


int main()
{
    int n,x,y;
    scanf("%d",&n);
    getchar();

    while(n--)
    {
        char s[10];
        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++)
                input[i][j]='X';

        for(int i=0; i<5; i++)
        {
            gets(s);
            for(int j=0; j<strlen(s); j++)
                input[i][j]=s[j];
        }

        Max=11;
        Count=0;

        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++)
                if(input[i][j]=='X' || input[i][j]==' ')
                {
                    x=i;
                    y=j;
                    input[i][j]='X';
                }
        dfs(x,y,x,y);

        if(Max==11)
            printf("Unsolvable in less than 11 move(s).\n");
        else
            printf("Solvable in %d move(s).\n",Max);
    }


    return 0;
}
