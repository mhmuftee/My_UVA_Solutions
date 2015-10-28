#include<stdio.h>

int main()
{
    char a[300];
    int i,n,count=0;
    double s=0,b=1.000000;

    while(gets(a))
    {
        if(a[0]=='*')
            break;


        count=0;
        s=0;
        for(i=1; a[i]; i++)
            switch(a[i])
            {
            case 'W':
            {
                s++;
                break;
            }
            case 'H':
            {
                s=s+.5;
                break;
            }
            case 'Q':
            {
                s=s+.25;
                break;
            }
            case 'E':
            {
                s=s+.125;
                break;
            }
            case 'S':
            {
                s=s+.0625;
                break;
            }
            case 'T':
            {
                s=s+.03125;
                break;
            }
            case 'X':
            {
                s=s+.015625;
                break;
            }
            case '/':
            {
                if(s==b)count++;
                s=0;
                break;
            }
            }

        printf("%d\n",count);
    }
    return 0;
}
