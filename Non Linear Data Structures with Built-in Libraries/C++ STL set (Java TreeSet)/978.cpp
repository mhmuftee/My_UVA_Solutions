#include<cstdio>
#include<vector>
#include<algorithm>
#include<set>
#include<stack>
#include<iostream>
using namespace std;

void print_Set( multiset<int> Set)
{
    multiset<int> :: iterator it;
    stack <int> S;

    for(it=Set.begin(); it!=Set.end(); it++)
        S.push(*it);
    while(!S.empty())
    {
        printf("%d\n",S.top());
        S.pop();
    }
}

int main()
{
    int Kas,num,num_green,num_blue,temp1,temp2;

    scanf("%d",&Kas);

    while(Kas--)
    {
        multiset <int> green,blue;

        multiset <int> :: iterator it;

        scanf("%d %d %d",&num,&num_green,&num_blue);

        for(int i=0; i<num_green; i++)
        {
            scanf("%d",&temp1);
            green.insert(temp1);
        }

        for(int i=0; i<num_blue; i++)
        {
            scanf("%d",&temp2);
            blue.insert(temp2);
        }

        while(!green.empty() && !blue.empty())
        {
            vector<int>c,d;

            for(int I=0; I<num; I++)
            {
                int a=0,b=0;
                if(!green.empty())
                {
                    it=green.end();
                    it--;
                    a=*it;
                    green.erase(it,green.end());
                }

                if(!blue.empty())
                {
                    it=blue.end();
                    it--;
                    b=*it;
                    blue.erase(it,blue.end());
                }

                if(a>b && a)
                    c.push_back(a-b);
                if(b>a && b)
                    d.push_back(b-a);
            }


            for(int j=0; j<c.size(); j++)
                green.insert(c[j]);
            for(int j=0; j<d.size(); j++)
                blue.insert(d[j]);
        }

        if(green.empty() && blue.empty())
            printf("green and blue died\n");
        else if(!green.empty())
        {
            printf("green wins\n");
            print_Set(green);
        }
        else if(!blue.empty())
        {
            printf("blue wins\n");
            print_Set(blue);
        }

        if(Kas) printf("\n");

    }

    return 0;
}
