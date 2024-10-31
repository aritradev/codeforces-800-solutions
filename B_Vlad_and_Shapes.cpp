#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
                count++;
        }
        if (count > 0)
            st.insert(count);
    }

    if (st.size() == 1)
        cout << "SQUARE\n";
    else
        cout << "TRIANGLE\n";
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}