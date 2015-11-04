#include<cstdio>
#include<cstring>
using namespace std;

int main()
{

    int N,kas=1;
    char number[100];

    while(scanf("%d",&N)==1 && N)
    {
        for(int ii=N;; ii++) {
            int len=0,n=ii;

            while(n)
            {
                number[len++]=(n%10)+48;
                n/=10;
            }
            number[len]='\0';

            for(int i=0; i<len/2; i++)
            {
                char ch=number[len-i-1];
                number[len-i-1]=number[i];
                number[i]=ch;
            }

            len=strlen(number);
            int chek[10]= {0};
            chek[0]=1;
            int b=0,c=0,d=0;

            while(1)
            {
                int a=number[b]-48;
                if(!chek[a]) {
                    c++;
                    chek[a]=1;
                }
                else {
                    if(c==len && b==0) {
                        printf("Case %d: %s\n",kas++,number);
                        d=1;
                    }
                    break;
                }
                if(a+b>=len)
                    b=(a+b)%(len);
                else
                    b+=a;
            }

            if(d)
                break;
        }
    }
    return 0;
}
