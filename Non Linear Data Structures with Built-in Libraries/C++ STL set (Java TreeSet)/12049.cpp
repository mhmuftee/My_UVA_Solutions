#include<cstdio>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;


int main(){

  int T;
  scanf("%d",&T);

  for(int I=0; I<T;I++){
    int sizeA,sizeB;
    scanf("%d %d",&sizeA,&sizeB);

    int A[sizeA+5];
    int B[sizeB+5];

    for(int J=0;J<sizeA;J++)
      scanf("%d",&A[J]);

    for(int K=0;K<sizeB;K++)
      scanf("%d",&B[K]);

    sort(A,A+sizeA);
    sort(B,B+sizeB);

    vector<int> v(2*(sizeA+sizeB+10));

    vector<int> :: iterator it;

    it = set_intersection(A,A+sizeA,B,B+sizeB,v.begin());

    v.resize(it-v.begin());

    printf("%d\n",sizeA+sizeB-2*(int)v.size());
  }
  return 0;
}

