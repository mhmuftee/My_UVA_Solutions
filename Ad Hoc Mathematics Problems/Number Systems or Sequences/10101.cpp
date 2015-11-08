#include<stdio.h>
#include<string.h>
char s[17],v[17];

int convert(long long a)
{
    int i;
    for(i=0; i<15; i++)s[i]='0';
    i=0;
    while(a)
    {
        s[i++]=a%10+48;
        a=a/10;
    }
    return i;
}

void reverse(char *fr,char *to)
{
    int l,s=strlen(fr);
    for(l=0; l<s; l++)
        to[l]=fr[s-l-1];
    to[s]='\0';
}
int main()
{

    long long a;
    int i,j,len,count=0;


    while(scanf("%lld",&a)==1 )
    {


        count++;
        if(!a)printf("%4d. 0\n",count);
        else
        {
            len=convert(a);
            reverse(s,v);

            printf("%4d.",count);
            if(v[0]!='0')printf(" %c kuti",v[0]);
            if(v[1]!='0'&& v[2]>='0')
                printf(" %c%c lakh",v[1],v[2]);
            if(v[1]=='0'&& v[2]!='0')
                printf(" %c lakh",v[2]);
            if(v[3]!='0'&& v[4]>='0')
                printf(" %c%c hajar",v[3],v[4]);
            if(v[3]=='0'&& v[4]!='0')
                printf(" %c hajar",v[4]);
            if(v[5]!='0')printf(" %c shata",v[5]);
            if(len>=10 && v[6]=='0' && v[7]=='0')printf(" kuti");
            if(v[6]!='0'&& v[7]>='0')
                printf(" %c%c kuti",v[6],v[7]);
            if(v[6]=='0'&& v[7]!='0')
                printf(" %c kuti",v[7]);
            if(v[8]!='0'&& v[9]>='0')
                printf(" %c%c lakh",v[8],v[9]);
            if(v[8]=='0'&& v[9]!='0')
                printf(" %c lakh",v[9]);
            if(v[10]!='0'&& v[11]>='0')
                printf(" %c%c hajar",v[10],v[11]);
            if(v[10]=='0'&& v[11]!='0')
                printf(" %c hajar",v[11]);
            if(v[12]!='0')printf(" %c shata",v[12]);
            if(v[13]!='0'&& v[14]>='0')
                printf(" %c%c",v[13],v[14]);
            if(v[13]=='0'&& v[14]!='0')
                printf(" %c",v[14]);

            printf("\n");
        }
    }
    return 0;
}
