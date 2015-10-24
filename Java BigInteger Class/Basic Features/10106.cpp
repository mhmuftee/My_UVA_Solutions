#include<cstdio>
#include<cstring>
using namespace std;

void reverseString(char a[])
{
    int len = strlen(a);
    for(int i=0; i<len/2; i++)
    {
        char temp;
        temp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=temp;
    }
    return ;
}

int main()
{
    char a[252],b[252],c[501];
    while(scanf("%s %s",a,b)==2)
    {
        reverseString(a);
        reverseString(b);
        if(strlen(b)>strlen(a))
        {
            strcpy(c,b);
            strcpy(b,a);
            strcpy(a,c);
        }

        memset(c,'0',sizeof(c));
        int siz=0;
        for(int i=0; i<strlen(b); i++)
        {
            for(int j=0; j<strlen(a); j++)
            {
                int k = i+j;
                int temp= (a[j]-'0')*(b[i]-'0');
                while(temp)
                {
                    int s = c[k]-'0'+temp%10;
                    c[k]=s%10+'0';
                    c[k+1]=(c[k+1]-'0'+(s/10)%10)+'0';
                    temp/=10;
                    k++;
                }
                siz=k;
            }
        }
        for(int i=siz+1; i>=0; i--)
            if(c[i]=='0')
                c[i]='\0';
            else
                break;
        reverseString(c);
        c[0]=='\0'?puts("0"):puts(c);
    }
    return 0;
}
