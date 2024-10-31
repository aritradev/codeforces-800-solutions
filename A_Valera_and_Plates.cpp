#include <bits/stdc++.h>
using namespace std;

#define cobra_69xp

using ll = long long int;
using ull = unsigned long long int;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define in insert
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define sp " "
#define endl "\n"
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define debug(x) cout << "Debug of " << #x << ": " << x << endl;

const int mod = 1e9 + 7;

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
ll sum(ll n) { return ((n * (n + 1)) / 2); }
ll ceil(ll a, ll b) { return ((a + (b - 1)) / b); }

void InputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/Programming File/input.txt", "r", stdin);
    freopen("E:/Programming File/output.txt", "w", stdout);
#endif
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int count = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            if (m > 0)
                m--;
            else
                count++;
        }
        else
        {
            if (k > 0)
                k--;
            else
            {
                if (m > 0)
                    m--;
                else
                    count++;
            }
        }
    }
    nl ; cout << count ;nl;
}

int main()
{

    ll tc = 1;
    // cin >> tc;
    while (tc--)
    {

        solve();
    }

    return 0;
}