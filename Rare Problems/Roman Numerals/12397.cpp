#include<cstdio>
#include<iostream>

using namespace std;

int main()
{

    int N;

    while(scanf("%d",&N)==1)
    {

        int matchhead=0;

        while(N)
        {
            if(N>=1000)
            {
                matchhead+=4;
                N-=1000;
            }
            else if(N>=900)
            {
                matchhead+=6;
                N-=900;
            }
            else if(N>=500)
            {
                matchhead+=3;
                N-=500;
            }
            else if(N>=400)
            {
                matchhead+=5;
                N-=400;
            }
            else if(N>=100)
            {
                matchhead+=2;
                N-=100;
            }
            else if(N>=90)
            {
                matchhead+=4;
                N-=90;
            }
            else if(N>=50)
            {
                matchhead+=2;
                N-=50;
            }
            else if(N>=40)
            {
                matchhead+=4;
                N-=40;
            }
            else if(N>=10)
            {
                matchhead+=2;
                N-=10;
            }
            else if(N>=9)
            {
                matchhead+=3;
                N-=9;
            }
            else if(N>=5)
            {
                matchhead+=2;
                N-=5;
            }
            else if(N>=4)
            {
                matchhead+=3;
                N-=4;
            }
            else if(N>=1)
            {
                matchhead+=1;
                N-=1;
            }
        }
        printf("%d\n",matchhead);
    }
    return 0;
}
