#include<stdio.h>
#include<string.h>

void reverse(char *f,char *t)
{
    int l,s=strlen(f);
    for(l=0; l<s; l++)
        t[l]=f[s-l-1];
    t[s]='\0';
}
int main() {

    char a[1005],b[1005];
    int n,i,j,c;
    while(gets(a))
    {
        n=strlen(a);
        if(a[0]>=48 && a[0]<=57) {
            reverse(a,b);
            for(j=0; j<n;) {
                if(b[j]=='9')
                {
                    if(b[j+1]=='7')printf("a");
                    if(b[j+1]=='8')printf("b");
                    if(b[j+1]=='9')printf("c");
                    if(b[j+1]=='0')printf("Z");
                    j=j+2;
                }
                if(b[j]=='3')
                {
                    if(b[j+1]=='2')printf(" ");
                    if(b[j+1]=='3')printf("!");
                    j=j+2;
                }
                if(b[j]=='4')
                {
                    if(b[j+1]=='4')printf(",");
                    if(b[j+1]=='6')printf(".");
                    j=j+2;
                }

                if(b[j]=='5')
                {
                    if(b[j+1]=='8')printf(":");
                    if(b[j+1]=='9')printf(";");
                    j=j+2;
                }
                if(b[j]=='6')
                {
                    if(b[j+1]=='3')printf("?");
                    if(b[j+1]=='5')printf("A");
                    if(b[j+1]=='6')printf("B");
                    if(b[j+1]=='7')printf("C");
                    if(b[j+1]=='8')printf("D");
                    if(b[j+1]=='9')printf("E");

                    j=j+2;
                }
                if(b[j]=='7')
                {
                    if(b[j+1]=='0')printf("F");
                    if(b[j+1]=='1')printf("G");
                    if(b[j+1]=='2')printf("H");
                    if(b[j+1]=='3')printf("I");
                    if(b[j+1]=='4')printf("J");
                    if(b[j+1]=='5')printf("K");
                    if(b[j+1]=='6')printf("L");
                    if(b[j+1]=='7')printf("M");
                    if(b[j+1]=='8')printf("N");
                    if(b[j+1]=='9')printf("O");

                    j=j+2;
                }
                if(b[j]=='8')
                {
                    if(b[j+1]=='0')printf("P");
                    if(b[j+1]=='1')printf("Q");
                    if(b[j+1]=='2')printf("R");
                    if(b[j+1]=='3')printf("S");
                    if(b[j+1]=='4')printf("T");
                    if(b[j+1]=='5')printf("U");
                    if(b[j+1]=='6')printf("V");
                    if(b[j+1]=='7')printf("W");
                    if(b[j+1]=='8')printf("X");
                    if(b[j+1]=='9')printf("Y");
                    j=j+2;
                }
                if(b[j]=='1')
                {
                    if(b[j+1]=='0'&&b[j+2]=='0')printf("d");
                    if(b[j+1]=='0'&&b[j+2]=='1')printf("e");
                    if(b[j+1]=='0'&&b[j+2]=='2')printf("f");
                    if(b[j+1]=='0'&&b[j+2]=='3')printf("g");
                    if(b[j+1]=='0'&&b[j+2]=='4')printf("h");
                    if(b[j+1]=='0'&&b[j+2]=='5')printf("i");
                    if(b[j+1]=='0'&&b[j+2]=='6')printf("j");
                    if(b[j+1]=='0'&&b[j+2]=='7')printf("k");
                    if(b[j+1]=='0'&&b[j+2]=='8')printf("l");
                    if(b[j+1]=='0'&&b[j+2]=='9')printf("m");
                    if(b[j+1]=='1'&&b[j+2]=='0')printf("n");
                    if(b[j+1]=='1'&&b[j+2]=='1')printf("o");
                    if(b[j+1]=='1'&&b[j+2]=='2')printf("p");
                    if(b[j+1]=='1'&&b[j+2]=='3')printf("q");
                    if(b[j+1]=='1'&&b[j+2]=='4')printf("r");
                    if(b[j+1]=='1'&&b[j+2]=='5')printf("s");
                    if(b[j+1]=='1'&&b[j+2]=='6')printf("t");
                    if(b[j+1]=='1'&&b[j+2]=='7')printf("u");
                    if(b[j+1]=='1'&&b[j+2]=='8')printf("v");
                    if(b[j+1]=='1'&&b[j+2]=='9')printf("w");
                    if(b[j+1]=='2'&&b[j+2]=='0')printf("x");
                    if(b[j+1]=='2'&&b[j+2]=='1')printf("y");
                    if(b[j+1]=='2'&&b[j+2]=='2')printf("z");
                    j=j+3;
                }
            }
            printf("\n");
        }
        else {
            for( i=n-1; i>=0; i--)
            {
                c=a[i];

                while(c) {
                    printf("%d",c%10);
                    c=c/10;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
