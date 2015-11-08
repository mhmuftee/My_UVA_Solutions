#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct al
{
    long long int i;
    char c;
};
typedef struct al t;
int main()
{   long long int fact();
    char a[1233];
    long long int i,n,m,j,max=-1,fn,fs;
    t ta[27];
    scanf("%lld\n",&m);
    for(j=0; j<m; j++)
    {
        gets(a);
        max=-1;
        n=strlen(a);
        fn=fact(n);
        for(i=0; i<n; i++)
            a[i]=tolower(a[i]);
        for(i=1; i<27; i++) ta[i].i=0;
        for(i=0; i<n; i++)
        {
            switch(a[i])
            {
            case 'a':
            {
                ta[1].c='a';
                ta[1].i++;
                break;
            }
            case 'b':
            {
                ta[2].c='b';
                ta[2].i++;
                break;
            }
            case 'c':
            {
                ta[3].c='c';
                ta[3].i++;
                break;
            }
            case 'd':
            {
                ta[4].c='d';
                ta[4].i++;
                break;
            }
            case 'e':
            {
                ta[5].c='e';
                ta[5].i++;
                break;
            }
            case 'f':
            {
                ta[6].c='f';
                ta[6].i++;
                break;
            }
            case 'g':
            {
                ta[7].c='g';
                ta[7].i++;
                break;
            }
            case 'h':
            {
                ta[8].c='h';
                ta[8].i++;
                break;
            }
            case 'i':
            {
                ta[9].c='i';
                ta[9].i++;
                break;
            }
            case 'j':
            {
                ta[10].c='j';
                ta[10].i++;
                break;
            }
            case 'k':
            {
                ta[11].c='k';
                ta[11].i++;
                break;
            }
            case 'l':
            {
                ta[12].c='l';
                ta[12].i++;
                break;
            }
            case 'm':
            {
                ta[13].c='m';
                ta[13].i++;
                break;
            }
            case 'n':
            {
                ta[14].c='n';
                ta[14].i++;
                break;
            }
            case 'o':
            {
                ta[15].c='o';
                ta[15].i++;
                break;
            }
            case 'p':
            {
                ta[16].c='p';
                ta[16].i++;
                break;
            }
            case 'q':
            {
                ta[17].c='q';
                ta[17].i++;
                break;
            }
            case 'r':
            {
                ta[18].c='r';
                ta[18].i++;
                break;
            }
            case 's':
            {
                ta[19].c='s';
                ta[19].i++;
                break;
            }
            case 't':
            {
                ta[20].c='t';
                ta[20].i++;
                break;
            }
            case 'u':
            {
                ta[21].c='u';
                ta[21].i++;
                break;
            }
            case 'v':
            {
                ta[22].c='v';
                ta[22].i++;
                break;
            }
            case 'w':
            {
                ta[23].c='w';
                ta[23].i++;
                break;
            }
            case 'x':
            {
                ta[24].c='x';
                ta[24].i++;
                break;
            }
            case 'y':
            {
                ta[25].c='y';
                ta[25].i++;
                break;
            }
            case 'z':
            {
                ta[26].c='z';
                ta[26].i++;
                break;
            }

            }
        }
        fs=1;
        for(i=1; i<27; i++)
            if(ta[i].i>1) {
                fs=fs*fact(ta[i].i);
            }

        printf("Data set %lld: %lld\n",j+1,fn/fs);
    }
    return 0;
}
long long int fact(long long int a) {
    long long int i,s=1;
    for(i=2; i<=a; i++)
        s=s*i;
    return s;
}
