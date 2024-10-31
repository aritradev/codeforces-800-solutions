#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, s, r;
    cin >> n >> s >> r;
    cout << s - r << " ";
    ll a = r / (n - 1);
    ll ex = r % (n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        ll x = a;
        if (ex)
        {
            x++;
            ex--;
        }
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    ll tc = 1;
    cin >> tc;
    for (ll t = 1; t <= tc; t++)
    {

        solve();
    }

    return 0;
}