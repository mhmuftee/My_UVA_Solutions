#include<cstdio>
#include<vector>
using namespace std;
int lenn,number[10],chek,taken[100];

vector<char>result;
vector<int>res;
vector<char>save[100];
char ch[10]= {'+','-','*'};

void crete()
{
    int len=result.size();
    if(len==4)
    {
        save[lenn++]=result;
        return ;
    }
    for(int i=0; i<3; i++)
    {
        result.push_back(ch[i]);
        crete();
        result.pop_back();
    }
}

void call()
{
    if(res.size()==5)
    {
        for(int i=0; i<lenn; i++)
        {
            long long n=(long long )res[0];

            for(int j=0; j<4; j++)
            {
                if(save[i][j]=='*')n*=res[j+1];
                if(save[i][j]=='+')n+=res[j+1];
                if(save[i][j]=='-')n-=res[j+1];
            }

            if(n==23) {
                chek=1;
                break;
            }


        }
        return ;
    }

    for(int i=0; i<5; i++)
    {
        if(!taken[i])
        {
            taken[i]=1;
            res.push_back(number[i]);
            call();
            taken[i]=0;
            res.pop_back();
        }
    }
}
int main()
{
    lenn=0;
    crete();

    while(scanf("%d %d %d %d %d",&number[0],&number[1],&number[2],&number[3],&number[4])==5)
    {
        if(number[0]==0) break;
        chek=0;
        call();
        if(chek)
            printf("Possible\n");
        else
            printf("Impossible\n");

    }

    return 0;
}
