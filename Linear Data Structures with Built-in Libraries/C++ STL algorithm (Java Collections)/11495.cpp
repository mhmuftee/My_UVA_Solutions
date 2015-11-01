#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int a[1000010];
long long count;
void merge(int low,int mid,int high)
{
    vector<int>left;
    vector<int >right;

    int len1=mid-low+1;
    int len2=high-mid;
    size_t x = 0;
    size_t y = 0;
    for(int i=0; i<len1; i++)
        left.push_back(a[i+low]);

    for(int i=0; i<len2; i++)
        right.push_back(a[i+mid+1]);

    left.push_back  (999999999 + 10);
    right.push_back (999999999 + 10);

    for(int k=low; k<=high; k++) {
        if(left[x]<=right[y])
        {
            a[k]=left[x++];
        }
        else
        {
            a[k]=right[y++];
            count+=len1-x;
        }
    }

}

void partition(int p,int r)
{
    if ( p < r ) {
        int q =(p + r) / 2;
        partition (p, q);
        partition (q + 1, r);
        merge (p, q, r);
    }
}
int main()
{
    int n;
    while ( scanf ("%d", &n) ==1 && n) {
        count = 0;
        for ( int i = 0; i < n; i++ ) scanf ("%d", &a [i]);

        partition(0, n - 1);
        if(count%2)
            cout << "Marcelo" << endl;
        else
            cout<< "Carlos" << endl;
    }
    return 0;
}


