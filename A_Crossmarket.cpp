
#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b && b == 1)
    {
        cout << 0 << endl;
        // break;
    }
    else
    {
        cout << (a + b - 2 ) + min(a, b) << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}