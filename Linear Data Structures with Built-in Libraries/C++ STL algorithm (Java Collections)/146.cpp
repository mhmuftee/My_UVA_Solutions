#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char a[55];

    while(cin >> a)
    {
        if(strcmp( a,"#" ) == 0)
            break;

        int length = strlen(a);
        if(next_permutation(a, a + length))
            cout << a << endl;
        else
            cout << "No Successor\n";
    }

}
