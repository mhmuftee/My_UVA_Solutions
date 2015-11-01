#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,m,n,inci[8][30],cas;
    scanf("%d",&cas);

    while(cas--)
    {
        scanf("%d %d",&n,&m);
        int adja[10][10]= {0};
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                scanf("%d",&inci[i][j]);

        bool output=false;
        int ma=0;
        for(j=0; j<m; j++)
        {
            int s=0;
            for(i=0; i<n; i++)
                s+=inci[i][j];
            if(s==2)
                ma++;
        }

        if(ma==m)
            output=true;


        if(output)
        {
            for(j=0; j<m; j++)
            {
                int cout=0,x,y;
                for(i=0; i<n; i++)
                {
                    if(inci[i][j]==1 && !cout)
                    {
                        x=i;
                        cout=1;
                    }
                    if(inci[i][j]==1 && cout)
                        y=i;
                }
                if(!adja[x][y] && !adja[y][x])
                    adja[x][y]=adja[y][x]=1;
                else
                {
                    output=false;
                    break;
                }


            }
        }

        if(output)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
