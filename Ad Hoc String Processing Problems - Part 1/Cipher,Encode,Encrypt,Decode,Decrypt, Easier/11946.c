#include<stdio.h>
#include<string.h>
int main() {
    char ch;
    int n;

    scanf("%d\n",&n);

    while(scanf("%c",&ch)==1)
    {
        if(ch=='0')printf("O");
        else   if(ch=='1')printf("I");
        else if(ch=='2')printf("Z");
        else if(ch=='3')printf("E");
        else if(ch=='4')printf("A");
        else if(ch=='5')printf("S");
        else if(ch=='6')printf("G");
        else if(ch=='7')printf("T");
        else if(ch=='8')printf("B");
        else if(ch=='9')printf("P");
        else printf("%c",ch);
    }
    return 0;
}
