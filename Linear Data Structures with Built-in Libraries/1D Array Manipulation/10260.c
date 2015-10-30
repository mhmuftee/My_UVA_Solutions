#include<stdio.h>
#include<string.h>
int main() {
    int i,n,a[21];
    char s[21];
    while(gets(s))
    {   for(i=0; i<21; i++)a[i]=0;
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


            }
        }
        for(i=0; i<n; i++)if(a[i]!=0 && a[i]!=a[i+1])printf("%d",a[i]);
        printf("\n");

    }

    return 0;
}
