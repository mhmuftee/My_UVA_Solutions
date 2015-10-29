#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number[11],guessNumber;
    string guess;
    for(int i=1; i<=10; i++)
        number[i]=1;
    while(scanf("%d\n",&guessNumber)==1 && guessNumber)
    {
        getline(cin,guess);
        if(guess=="too low")
            for(int i=1; i<=guessNumber; i++) number[i]=0;
        else if(guess=="too high")
            for(int i=guessNumber; i<=10; i++) number[i]=0;
        else if(guess=="right on")
        {
            if(number[guessNumber]==1)
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");
            for(int i=1; i<=10; i++)
                number[i]=1;
        }
    }
    return 0;
}
