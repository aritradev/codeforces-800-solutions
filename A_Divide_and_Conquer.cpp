#include<bits/stdc++.h>
using namespace std;
void solv()
{   int n;
    int N=55;
 
    int a[N];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
 
    int s = 0;
    for (int i = 1; i <= n; ++i)
        s += a[i];
 
    if (s % 2 == 0)
    {
        cout << "0\n";
        return;
    }
    int ans = N;
    for (int i = 1; i <= n; ++i)
    {
        int x = a[i];
        int yans = 0;
        while (x % 2 == a[i] % 2)
        {
            x /= 2;
            ++yans;
        }
        ans = min(ans, yans);
    }
    cout << ans << "\n";
}
 
int main()
{
  
 
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solv();
    }
    return 0;
}