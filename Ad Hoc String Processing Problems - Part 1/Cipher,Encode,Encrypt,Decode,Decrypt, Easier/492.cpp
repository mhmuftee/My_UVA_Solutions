#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    string s;
    int count=0;
    char ch='\0';
    while(getline( cin, s ))
    {
        int len=s.size();

        for(int i=0; i<len; i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                printf("%c",s[i]);
                if(len!=1)count=1;
            }
            else if((s[i]>='b'&&s[i]<='z')||(s[i]>='B'&&s[i]<='Z'))
            {   if(!count)
                {
                    ch=s[i];
                }
                if(count)
                {
                    printf("%c",s[i]);
                }
                if(len!=1)count=1;
            }
            else
            {
                if(ch && count &&len!=1)
                    printf("%c",ch);
                if(count)
                    printf("ay");

                printf("%c",s[i]);
                count=0;
                ch='\0';
            }
        printf("\n");
    }
    return 0;
}
