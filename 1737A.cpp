#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
void solve()
{
    int n, k;
    int sum = 0;
    cin >> n;
    int ara[n];
    int ara1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        sum += ara[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ara1[i];
        sum -= ara1[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (ara[i] ^ ara1[i]);
    }
    ans = min(ans, 1 + abs(sum));
    cout << ans << endl;
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