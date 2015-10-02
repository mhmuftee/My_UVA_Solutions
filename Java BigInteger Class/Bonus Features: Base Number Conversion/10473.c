#include<stdio.h>

int main() {

    char HEX[33],DEC[33];
    long number;

    while(scanf("%s",DEC)==1) {
        if(DEC[0]=='-')break;
        if(DEC[1]=='x') {
            sscanf(DEC,"%X",&number);
            printf("%ld\n",number);
        }
        else
        {
            number=atol(DEC);
            sprintf(HEX,"%X",number);
            printf("0x%s\n",HEX);
        }
    }
    return 0;
}
