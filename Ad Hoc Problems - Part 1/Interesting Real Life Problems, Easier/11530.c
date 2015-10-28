#include<stdio.h>
#include<string.h>
int main()
{
    int a,i=0,j=0,n,m=0;
    char c[1000];
    scanf("%d",&a);

    for(j=0; j<=a; j++)
    {
        m=n=0;
        gets(c);

        n=strlen(c);
        for(i=0; i<n; i++)

            switch(c[i])
            {
            case ' ':
                m++;
                break;
            case 'a':
                m++;
                break;
            case 'd':
                m++;
                break;
            case 'g':
                m++;
                break;
            case 'j':
                m++;
                break;
            case 'm':
                m++;
                break;
            case 'p':
                m++;
                break;
            case 'w':
                m++;
                break;
            case 't':
                m++;
                break;
            case 'b':
                m=m+2;
                break;
            case 'e':
                m=m+2;
                break;
            case 'n':
                m=m+2;
                break;
            case 'x':
                m=m+2;
                break;
            case 'u':
                m=m+2;
                break;
            case 'k':
                m=m+2;
                break;
            case 'h':
                m=m+2;
                break;
            case 'q':
                m=m+2;
                break;
            case 'c':
                m=m+3;
                break;
            case 'f':
                m=m+3;
                break;
            case 'i':
                m=m+3;
                break;
            case 'l':
                m=m+3;
                break;
            case 'o':
                m=m+3;
                break;
            case 'r':
                m=m+3;
                break;
            case 'v':
                m=m+3;
                break;
            case 'y':
                m=m+3;
                break;
            case 's':
                m=m+4;
                break;
            case 'z':
                m=m+4;
                break;
            }
        if(m>0)
            printf("Case #%d: %d\n",j,m);
    }
    return 0;
}
