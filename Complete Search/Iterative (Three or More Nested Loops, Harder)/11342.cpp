#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

struct square {
    int sq;
    int a;
    int b;
} s [50000];

bool isSquare (int num)
{
    int sqr = sqrt (num);

    if ( sqr * sqr == num ) return true;
    return false;
}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    int len_s = 0;

    for ( int i = 0; i < 225; i++ ) {
        for ( int j = i; j < 225; j++ ) {
            s [len_s].sq = i * i + j * j;
            s [len_s].a = i;
            s [len_s].b = j;
            len_s++;
        }
    }

    while ( testCase-- ) {
        int k;
        scanf ("%d", &k);

        bool printed = false;

        for ( int i = 0; i < len_s; i++ ) {
            if ( isSquare (k - s [i].sq) ) {
                int output [3];
                output [0] = s [i].a;
                output [1] = s [i].b;
                output [2] = (int) sqrt (k - s [i].sq);
                sort (output, output + 3);
                printf ("%d %d %d\n", output [0], output [1], output [2]);
                printed = true;
                break;
            }
        }

        if ( !printed ) printf ("-1\n");

    }

    return 0;
}


