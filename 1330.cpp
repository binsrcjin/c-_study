#include <iostream>
using namespace std;

int main()
{
    int m,n;

    cin >> m;
    cin >> n;

    if ( m > n)
    {
        cout << "m > n";
    }
    else if ( m < n)
    {
        cout << "m < n";
    }
    else
    {
        cout << " m == n ";
    }

    return 0;
}