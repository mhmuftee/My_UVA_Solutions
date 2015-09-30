#include<cstdio>
int main()
{
    long i,x,y,z,max,n,a,b ;
    char s[2000001] ;

    while( scanf("%ld",&n) == 1  && n )
    {
        scanf("%s",s) ;
        max = 2000001 ;
        a = 0 ;
        b = 0 ;
        for( i=0; i<n ; i++ )
        {
            if( s[i] == 'Z' )
            {
                max = 0;
                break;
            }
            if( s[i] == 'R' )
            {
                x = i+1;
                a = 1;
            }
            if( s[i]=='D' )
            {
                y = i+1;
                b = 1;
            }
            z = x-y ;
            if( z<0 )
                z =- z ;
            if( a && b && z < max )
                max = z ;
        }
        printf("%ld\n",max );

    }
    return 0;
}
