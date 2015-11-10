#include<stdio.h>
struct frequency
{
    int i;
    char c;
};
typedef struct frequency f;

int main() {
    int n,i,j,count=0;
    char ch;
    f a[27],t;
    for(j=1; j<=26; j++) {
        a[j].i=0;
    }
    scanf("%d\n",&n);
    while(scanf("%c",&ch)!=EOF) {
        if(ch=='\n')count++;


        if(ch=='a' || ch=='A') {
            a[1].c='A';
            a[1].i++;
        }
        if(ch=='b' || ch=='B') {
            a[2].c='B';
            a[2].i++;
        }
        if(ch=='c' || ch=='C') {
            a[3].c='C';
            a[3].i++;
        }
        if(ch=='d' || ch=='D') {
            a[4].c='D';
            a[4].i++;
        }
        if(ch=='e' || ch=='E') {
            a[5].c='E';
            a[5].i++;
        }
        if(ch=='f' || ch=='F') {
            a[6].c='F';
            a[6].i++;
        }
        if(ch=='g' || ch=='G') {
            a[7].c='G';
            a[7].i++;
        }
        if(ch=='h' || ch=='H') {
            a[8].c='H';
            a[8].i++;
        }
        if(ch=='i' || ch=='I') {
            a[9].c='I';
            a[9].i++;
        }
        if(ch=='j' || ch=='J') {
            a[10].c='J';
            a[10].i++;
        }
        if(ch=='k' || ch=='K') {
            a[11].c='K';
            a[11].i++;
        }
        if(ch=='l' || ch=='L') {
            a[12].c='L';
            a[12].i++;
        }
        if(ch=='m' || ch=='M') {
            a[13].c='M';
            a[13].i++;
        }
        if(ch=='n' || ch=='N') {
            a[14].c='N';
            a[14].i++;
        }
        if(ch=='o' || ch=='O') {
            a[15].c='O';
            a[15].i++;
        }
        if(ch=='p' || ch=='P') {
            a[16].c='P';
            a[16].i++;
        }
        if(ch=='q' || ch=='Q') {
            a[17].c='Q';
            a[17].i++;
        }
        if(ch=='r' || ch=='R') {
            a[18].c='R';
            a[18].i++;
        }
        if(ch=='s' || ch=='S') {
            a[19].c='S';
            a[19].i++;
        }
        if(ch=='t' || ch=='T') {
            a[20].c='T';
            a[20].i++;
        }
        if(ch=='u' || ch=='U') {
            a[21].c='U';
            a[21].i++;
        }
        if(ch=='v' || ch=='V') {
            a[22].c='V';
            a[22].i++;
        }
        if(ch=='w' || ch=='W') {
            a[23].c='W';
            a[23].i++;
        }
        if(ch=='x' || ch=='X') {
            a[24].c='X';
            a[24].i++;
        }
        if(ch=='y' || ch=='Y') {
            a[25].c='Y';
            a[25].i++;
        }
        if(ch=='z' || ch=='Z') {
            a[26].c='Z';
            a[26].i++;
        }

        if(count==n) {

            for(i=1; i<=25; i++)
                for(j=i+1; j<=26; j++)
                    if(a[i].i<a[j].i)

                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
            for(i=1; i<=25; i++)
                for(j=i+1; j<=26; j++)
                    if(a[i].i==a[j].i && a[i].c>a[j].c)

                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }


            for(i=1; i<=26; i++)
                if(a[i].i!=0)
                    printf("%c %d\n",a[i].c,a[i].i);
            break;
        }
    }

    return 0;
}
