#include<cstdio>
#include<cstring>
using namespace std;

char AS[]="*****",
          AD[]=".....",
               FS[]="*....",
                    LS[]="....*",
                         FLS[]="*...*",
                               FLD[]=".***.",
                                     MS[]="..*..",
                                             FTS[]="***..",
                                                     OTS[]="*.*..",
                                                             TTD[]="*..**",
                                                                     OFS[]="*..*.",
                                                                             SFS[]=".*.*.";

int N;
void printS()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",LS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
}
void printG()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AD[j]);
        printf("\n");
    }
}
void printA()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLD[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLS[j]);
        printf("\n");
    }

}
void printV()
{
    for(int l=0; l<3; l++)
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<5; j++)
                for(int k=0; k<N; k++)
                    printf("%c",FLS[j]);
            printf("\n");
        }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",SFS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",MS[j]);
        printf("\n");
    }
}
void printE()
{

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FTS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }

}
void printH()
{
    for(int l=0; l<2; l++)
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<5; j++)
                for(int k=0; k<N; k++)
                    printf("%c",FLS[j]);
            printf("\n");
        }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int l=0; l<2; l++)
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<5; j++)
                for(int k=0; k<N; k++)
                    printf("%c",FLS[j]);
            printf("\n");
        }
}
void printR()
{

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",OTS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",TTD[j]);
        printf("\n");
    }
}
void printI()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int l=0; l<3; l++)
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<5; j++)
                for(int k=0; k<N; k++)
                    printf("%c",MS[j]);
            printf("\n");
        }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
}
void printD()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FTS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",OFS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",OFS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FTS[j]);
        printf("\n");
    }

}
void printO()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
    for(int l=0; l<3; l++)
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<5; j++)
                for(int k=0; k<N; k++)
                    printf("%c",FLS[j]);
            printf("\n");
        }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",AS[j]);
        printf("\n");
    }
}
void printY()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",FLS[j]);
        printf("\n");
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<5; j++)
            for(int k=0; k<N; k++)
                printf("%c",SFS[j]);
        printf("\n");
    }
    for(int l=0; l<3; l++)
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<5; j++)
                for(int k=0; k<N; k++)
                    printf("%c",MS[j]);
            printf("\n");
        }

}
void horaizontal()
{
    printS();
    printG();
    printA();
    printG();
    printV();
    printG();
    printE();
    printG();
    printG();
    printG();
    printH();
    printG();
    printR();
    printG();
    printI();
    printG();
    printD();
    printG();
    printO();
    printG();
    printY();
}

void fline()
{
    for(int l=0; l<N; l++)
    {
        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLD[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N*3; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FTS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        printf("\n");
    }
}

void Sline()
{
    for(int l=0; l<N; l++)
    {
        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FS[i]);

        for(int i=0; i<N*3; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",OFS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",SFS[i]);

        printf("\n");
    }
}

void Tline()
{
    for(int l=0; l<N; l++)
    {
        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FTS[i]);

        for(int i=0; i<N*3; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        printf("\n");
    }
}

void Fline()
{
    for(int l=0; l<N; l++)
    {
        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",LS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",SFS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FS[i]);

        for(int i=0; i<N*3; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",OTS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",OFS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        printf("\n");
    }
}

void Vline()
{
    for(int l=0; l<N; l++)
    {
        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N*3; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FLS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",TTD[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",FTS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",AS[i]);

        for(int i=0; i<N; i++)
            printf(".");

        for(int i=0; i<5; i++)
            for(int j=0; j<N; j++)
                printf("%c",MS[i]);

        printf("\n");
    }
}

void Vertical()
{
    fline();
    Sline();
    Tline();
    Fline();
    Vline();
}
int main()
{
    while(scanf("%d",&N)==1 && N)
    {
        if(N>0)
            Vertical();

        else
        {
            N=-N;
            horaizontal();
        }
        printf("\n\n");
    }
    return 0;
}
