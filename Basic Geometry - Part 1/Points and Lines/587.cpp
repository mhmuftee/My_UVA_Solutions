#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    char s[1000],ss[10],sn[10];
    int Map=1;
    while(gets(s))
    {
        if(strcmp(s,"END")==0)
            break;
        int len=strlen(s),i,j=0,k=0,y,h;

        double x,lenx=0,leny=0;
        for(i=0; i<len; i++)
        {
            if(s[i]=='.' || s[i]==',')
            {
                ss[k++]='\0';
                sn[j++]='\0';
                sscanf(sn,"%lf",&x);
                y=strlen(ss);
                if(y==2)
                    x=sqrt((x*x)/2.0);

                for( h=0; h<y; h++)
                    if(ss[h]=='N')
                        leny+=x;
                    else if(ss[h]=='S')
                        leny-=x;
                    else if(ss[h]=='E')
                        lenx+=x;
                    else if(ss[h]=='W')
                        lenx-=x;
                j=0;
                k=0;
            }
            else
            {
                if(s[i]>='0' && s[i]<='9')
                    sn[j++]=s[i];
                else
                    ss[k++]=s[i];
            }
        }
        printf("Map #%d\nThe treasure is located at (%.3lf,%.3lf).\nThe distance to the treasure is %.3lf.\n\n",Map++,lenx,leny,hypot(lenx,leny));
    }
    return 0;
}
