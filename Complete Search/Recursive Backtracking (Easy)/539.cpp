#include <iostream>
#include <stdio.h>
#include<string.h>
#include <algorithm>
using namespace std;

int e[50][50], v[50][50];
int N, E, a, b,sum,mx,maxi;

void dfs(int n) {
    if(sum>maxi)maxi=sum;
    int i, longest_road = 0;
    for (i = 0; i < N; i++)
        if (e[n][i] && !v[n][i]) {
            v[n][i] = v[i][n] = 1;
            sum++;
            dfs(i);
            sum--;
            v[n][i] = v[i][n] = 0;
        }
    return ;
}

int main() {
    while (scanf("%d %d", &N, &E) != EOF && N && E) {
        memset(v, 0, sizeof v), memset(e, 0, sizeof e);
        int i, longest_road = 0;
        for (i = 0; i < E; i++) {
            scanf("%d %d", &a, &b);
            e[a][b] = e[b][a] = 1;
        }
        mx=0;
        for (i = 0; i < N; i++)
        {
            sum=maxi=0;
            dfs(i);
            if(maxi>mx)mx=maxi;
        }
        printf("%d\n", mx);
    }
    return 0;
}
