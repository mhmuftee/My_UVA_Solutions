#include<stdio.h>
int main()
{
    char n;
    while(scanf("%c",&n)!=EOF)
    {
        if(n=='W')printf("Q");
        else if(n=='E')printf("W");
        else if(n=='R')printf("E");
        else if(n=='T')printf("R");
        else if(n=='Y')printf("T");
        else if(n=='U')printf("%c",92);
        else if(n=='I')printf("U");
        else if(n=='O')printf("I");
        else if(n=='P')printf("O");
        else if(n=='[')printf("P");
        else if(n==']')printf("[");
        else if(n=='S')printf("A");
        else if(n=='D')printf("S");
        else if(n=='F')printf("D");
        else if(n=='G')printf("F");
        else if(n=='H')printf("G");
        else if(n=='J')printf("H");
        else if(n=='K')printf("J");
        else if(n=='L')printf("K");
        else if(n==';')printf("L");
        else if(n==39)printf(";");
        else if(n==92)printf("]");
        else if(n=='X')printf("Z");
        else if(n=='C')printf("X");
        else if(n=='V')printf("C");
        else if(n=='B')printf("V");
        else if(n=='N')printf("B");
        else if(n=='M')printf("N");
        else if(n==',')printf("M");
        else if(n=='.')printf(",");
        else if(n=='/')printf(".");
        else if(n=='1')printf("`");
        else if(n=='2')printf("1");
        else if(n=='3')printf("2");
        else if(n=='4')printf("3");
        else if(n=='5')printf("4");
        else if(n=='6')printf("5");
        else if(n=='7')printf("6");
        else if(n=='8')printf("7");
        else if(n=='9')printf("8");
        else if(n=='0')printf("9");
        else if(n=='-')printf("0");
        else if(n=='=')printf("-");
        else if(n==' ')printf(" ");
        else if(n=='\n')printf("\n");
        else printf("%c",n);
    }
    return 0;
}
