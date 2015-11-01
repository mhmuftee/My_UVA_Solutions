#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    string user_name;
    while(cin>>user_name)
    {
        vector <string> generated_password;
        string use=user_name;

        for(int J=1; J<=10; J++)
        {
            prev_permutation(use.begin(),use.end());
            generated_password.push_back(use);
        }
        reverse(generated_password.begin(),generated_password.end());
        generated_password.push_back(user_name);
        for(int J=1; J<=10; J++)
        {
            next_permutation(user_name.begin(),user_name.end());
            generated_password.push_back(user_name);
        }

        sort(generated_password.begin(),generated_password.end());

        int minimum_absolute_distance=-1;
        string final_password;
        for(int J=0; J<generated_password.size(); J++)
        {
            int absolute_distance=100;
            string password;
            for(int K=0; K<generated_password[J].size()-1; K++)
            {
                if(abs(generated_password[J][K]-generated_password[J][K+1])<absolute_distance)
                {
                    absolute_distance=abs(generated_password[J][K]-generated_password[J][K+1]);
                    password=generated_password[J];
                }
            }
            if(absolute_distance>minimum_absolute_distance)
            {
                final_password=password;
                minimum_absolute_distance=absolute_distance;
            }
        }

        cout<<final_password<<minimum_absolute_distance<<endl;
    }

    return 0;
}
