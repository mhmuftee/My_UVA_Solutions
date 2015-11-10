#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    int NN;
    char str[100],save[200][120];
    scanf("%d",&NN);

    for(int cas=1; cas<=NN; cas++)
    {
        printf("Case #%d:\n",cas);

        scanf("%s",str);
        memset(save,' ',sizeof(save));

        int max=80;
        int min=81 ;
        int x=80,y=0,z;
        bool low = false;

        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]=='R')
            {
                x++;
                save[x][y]='/';
                if(x>max)max=x;
                low =false;
            }

            else if(str[i]=='C')
            {
                save[x+1][y]='_';
                if(low)
                {
                    if(x+1<min)min=x+1;
                }
                else if(x+1>max)max=x+1;
            }
            else if(str[i]=='F')
            {
                save[x][y]='\\';
                if(x<min)min=x;
                x--;
                low=true;
            }
            y++;
        }
        int length[200];

        for(int i=max; i>=min; i--)
        {
            for(int j =0 ; j <strlen(str); j++)
                if(save[i][j]!=' ')
                    length[i]=j;
        }

        for(int i=max; i>=min; i--)
        {

            printf("| ");
            for(int j=0; j<=length[i]; j++)
                printf("%c",save[i][j]);
            printf("\n");
        }
        printf("+");
        for(int i=0; i<strlen(str)+2; i++)
            printf("-");
        printf("\n\n");
    }
    return 0;
}
