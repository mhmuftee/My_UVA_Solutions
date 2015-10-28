#include<stdio.h>

int main() {

    int month_first[12]= {1,4,4,7,2,5,7,3,6,1,4,6};
    int m,n,i,j,cas;

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d %d",&m,&n);
        if(month_first[m-1]==1)n=n%7;
        if(month_first[m-1]==4) {
            if(n>=4)n=(n-4)%7;
            else n=n+3;
        }
        if(month_first[m-1]==7)n=(n-1)%7;
        if(month_first[m-1]==3) {
            if(n>=5)n=(n-5)%7;
            else n=n+2;
        }
        if(month_first[m-1]==5) {
            if(n>=3)n=(n-3)%7;
            else n=n+4;
        }
        if(month_first[m-1]==6) {
            if(n>=2)n=(n-2)%7;
            else n=n+5;
        }
        if(month_first[m-1]==2) {
            if(n>=6)n=(n-6)%7;
            else n=n+1;
        }
        switch(n)
        {
        case 1: {
            printf("Saturday\n");
            break;
        }
        case 2: {
            printf("Sunday\n");
            break;
        }
        case 3: {
            printf("Monday\n");
            break;
        }
        case 4: {
            printf("Tuesday\n");
            break;
        }
        case 5: {
            printf("Wednesday\n");
            break;
        }
        case 6: {
            printf("Thursday\n");
            break;
        }
        case 0: {
            printf("Friday\n");
            break;
        }
        }

    }


    return 0;
}
