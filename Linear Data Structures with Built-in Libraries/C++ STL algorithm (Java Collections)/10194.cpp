#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<cstdlib>
#include<map>
#include<algorithm>
using namespace std;
struct node
{
    string team_name;
    int t_point,t_game_played,
        win,loss,tie,goal_d,goal_s,goal_a;
} arr[35];
bool cmp(node a,node b)
{
    string x=a.team_name,y=b.team_name;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);
    if(a.t_point!=b.t_point)
        return a.t_point>b.t_point;
    else if(a.win!=b.win)
        return a.win>b.win;
    else if (a.goal_d!=b.goal_d)
        return a.goal_d>b.goal_d;
    else if (a.goal_s!=b.goal_s)
        return a.goal_s>b.goal_s;
    else if (a.t_game_played!=b.t_game_played)
        return a.t_game_played<b.t_game_played;
    else return x<y;
}
map<string,int>index;
int main()
{
    int i,j,k,cas,new_l=0,T_num,P_num;
    string tour_name;
    char ss[1000];
    scanf("%d",&cas);
    getchar();
    while(cas--)
    {
        index.clear();
        string s;
        int b=0;
        getline(cin,tour_name);
        scanf("%d",&T_num);
        getchar();
        for(i=0; i<T_num; i++)
        {
            getline(cin,s);
            if(!index[s])
                index[s]=++b;
            arr[b].team_name=s;
        }
        for(i=1; i<=b; i++)
        {
            arr[i].goal_a=0;
            arr[i].goal_d=0;
            arr[i].goal_s=0;
            arr[i].loss=0;
            arr[i].tie=0;
            arr[i].t_game_played=0;
            arr[i].t_point=0;
            arr[i].win=0;
        }
        scanf("%d",&P_num);
        getchar();
        while(P_num--)
        {
            getline(cin,s);
            int x,y;

            string sx,sy;
            for(i=0,j=0; i<s.size(); i++)
            {
                if(s[i]=='#') break;
                sx.push_back(s[i]);
            }
            for(i=s.size()-1,j=0; i>0; i--)
            {
                if(s[i]=='#') break;
                sy.push_back(s[i]);
            }
            reverse(sy.begin(),sy.end());
            int xa,xb;
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='@')
                {
                    xb=i;
                    break;
                }
                if(s[i]=='#')
                    xa=i;
            }

            for(j=0,i=xa+1; i<xb; i++)
                ss[j++]=s[i];
            ss[j++]='\0';
            x=atoi(ss);
            for(j=0,i=xb+1;; i++)
            {
                if(s[i]=='#')
                    break;
                ss[j++]=s[i];
            }
            ss[j++]='\0';
            y=atoi(ss);

            arr[index[sx]].goal_a+=y;
            arr[index[sy]].goal_s+=y;
            arr[index[sx]].goal_s+=x;
            arr[index[sy]].goal_a+=x;
            arr[index[sx]].t_game_played++;
            arr[index[sy]].t_game_played++;
            if(x==y)
            {
                arr[index[sx]].tie++;
                arr[index[sy]].tie++;
            }
            else if(x>y)
            {
                arr[index[sx]].win++;
                arr[index[sy]].loss++;
            }
            else
            {
                arr[index[sy]].win++;
                arr[index[sx]].loss++;
            }
        }
        for(i=1; i<=b; i++)
        {
            arr[i].t_point=arr[i].win*3+arr[i].tie*1;
            arr[i].goal_d=arr[i].goal_s-arr[i].goal_a;
        }
        sort(arr+1,arr+b+1,cmp);
        if(new_l)
            printf("\n");
        cout<<tour_name<<endl;
        for(i=1; i<=b; i++)
        {
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",i,((string)arr[i].team_name).c_str(),
                   arr[i].t_point,arr[i].t_game_played,arr[i].win,arr[i].tie,arr[i].loss,
                   arr[i].goal_d,arr[i].goal_s,arr[i].goal_a);
        }
        new_l++;
    }
    return 0;
}
