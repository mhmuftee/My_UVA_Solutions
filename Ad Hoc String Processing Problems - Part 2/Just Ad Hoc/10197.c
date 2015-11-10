#include<stdio.h>
#include<string.h>
int main()
{

    char vp[100],ve[100];
    int i,lenvp;
    int cas=0;
    while(scanf("%s %s",vp,ve)!=EOF)
    {
        lenvp=strlen(vp);

        if(cas!=0)printf("\n");
        printf("%s (to %s)\n",vp,ve);
        if(vp[lenvp-1]=='r' && (vp[lenvp-2]=='a'|| vp[lenvp-2]=='e'||vp[lenvp-2]=='i'))
        {
            if(vp[lenvp-2]=='a')

            {
                printf("eu        ");
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("o\n");

                printf("tu        ");
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("s\n");

                printf("ele/ela   ");
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("\n");

                printf("n%cs       ",243);
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("mos\n");

                printf("v%cs       ",243);
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("is\n");

                printf("eles/elas ");
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("m\n");





            }
            if(vp[lenvp-2]=='e')

            {
                printf("eu        ");
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("o\n");

                printf("tu        ");
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("s\n");

                printf("ele/ela   ");
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("\n");

                printf("n%cs       ",243);
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("mos\n");

                printf("v%cs       ",243);
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("is\n");

                printf("eles/elas ");
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("m\n");



            }
            if(vp[lenvp-2]=='i')

            {
                printf("eu        ");
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("o\n");

                printf("tu        ");
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("es\n");

                printf("ele/ela   ");
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("e\n");

                printf("n%cs       ",243);
                for(i=0; i<lenvp-1; i++)
                    printf("%c",vp[i]);
                printf("mos\n");

                printf("v%cs       ",243);
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("is\n");

                printf("eles/elas ");
                for(i=0; i<lenvp-2; i++)
                    printf("%c",vp[i]);
                printf("em\n");
            }
        }
        else
            printf("Unknown conjugation\n");
        cas++;
    }
    return 0;
}
