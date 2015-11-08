#include<stdio.h>
#include<string.h>
int main()
{

    int even,odd,i,n,multi;
    char s[10001];
    while(gets(s))
    {
        odd=0;
        even=0;
        n=strlen(s);
        if(s[0]=='0'&&n==1)break;
        for(i=0; i<n; i++)
            if(i%2==0)
                even=even+(s[i]-48);
            else
                odd=odd+(s[i]-48);
        multi=odd-even;
        if(multi%11==0)
            printf("%s is a multiple of 11.\n",s);
        else
            printf("%s is not a multiple of 11.\n",s);
    }
    return 0;
}
