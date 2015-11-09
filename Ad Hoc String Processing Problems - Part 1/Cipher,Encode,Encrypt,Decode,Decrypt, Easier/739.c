#include<stdio.h>
#include<string.h>

int main() {
    int i,j,n,a[21],b[21];
    char s[21];
    char c[10]="NAME",d[23]="SOUNDEX CODE",ch=' ';
    printf("%9c%s%21c%s\n",ch,c,ch,d);
    while(gets(s))

    {   for(i=0; i<21; i++) {
            a[i]=0;
            b[i]=0;
        }
        n=strlen(s);
        for(i=0; i<n; i++)
        {
            switch (s[i]) {
            case 'B': {
                a[i]=1;
                break;
            }
            case 'F': {
                a[i]=1;
                break;
            }
            case 'P': {
                a[i]=1;
                break;
            }
            case 'V': {
                a[i]=1;
                break;
            }
            case 'C': {
                a[i]=2;
                break;
            }
            case 'G': {
                a[i]=2;
                break;
            }
            case 'J': {
                a[i]=2;
                break;
            }
            case 'K': {
                a[i]=2;
                break;
            }
            case 'Q': {
                a[i]=2;
                break;
            }
            case 'X': {
                a[i]=2;
                break;
            }
            case 'S': {
                a[i]=2;
                break;
            }
            case 'Z': {
                a[i]=2;
                break;
            }
            case 'D': {
                a[i]=3;
                break;
            }
            case 'T': {
                a[i]=3;
                break;
            }
            case 'L': {
                a[i]=4;
                break;
            }
            case 'M': {
                a[i]=5;
                break;
            }
            case 'N': {
                a[i]=5;
                break;
            }
            case 'R': {
                a[i]=6;
                break;
            }
            default : {
                a[i]=0;
                break;
            }

            }
        }

        j=0;
        for(i=1; i<n; i++)if(a[i]!=0 && a[i-1]!=a[i])

            {
                b[j]=a[i];
                j++;
            }

        printf("%9c%s",ch,s);
        for(i=n; i<25; i++)printf("%c",ch);
        printf("%c",s[0]);
        for(i=0; i<3; i++)printf("%d",b[i]);
        printf("\n");
    }

    printf("%19cEND OF OUTPUT\n",ch);


    return 0;
}
