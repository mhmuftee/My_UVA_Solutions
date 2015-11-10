#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
char s[11],sort[11],c[11];
void convert(long a) {
    memset(s,0,sizeof(s));
    int i=0;
    while(a)
    {
        s[i++]=a%10+48;
        a=a/10;
    }
}

void reverse(char *fr,char *to)
{
    int l,s=strlen(fr);
    for(l=0; l<s; l++)
        to[l]=fr[s-l-1];
    to[s]='\0';
}

void sortc() {
    memset(sort,0,sizeof(sort));
    int j,k=0,len,m=0;
    char i;
    len=strlen(s);
    for(i='0'; i<='9'; i++)
    {
        for(j=0; j<=len; j++)
        {
            if(s[j]==i && m<len-1)
            {
                sort[k++]=i;
                m++;
            }
            else if(s[j]==i && m==len-1)
            {
                sort[k++]=i;
                m++;
            }
            if(m==len)break;
        }
    }

}


using namespace std;



int main() {


    long a,b,input,result,number[1001];
    int count,check;

    while(scanf("%ld",&input)==1 && input)

    {
        count=0;
        check=0;

        convert(input);


        printf("Original number was %ld\n",input);
        while(1)
        {   memset(c,0,sizeof(c));
            sortc();
            reverse(sort,c);
            b=atol(sort);
            a=atol(c);
            result=a-b;
            number[count]=result;
            count++;
            printf("%ld - %ld = %ld\n",a,b,result);
            check=0;
            for(int N=0; N<count-1; N++)
            {
                if(number[N]==result)
                {   check=1;
                }
            }

            if(check)
            {
                printf("Chain length %d\n\n",count);
                break;
            }

            convert(result);
        }
    }
    return 0;
}
