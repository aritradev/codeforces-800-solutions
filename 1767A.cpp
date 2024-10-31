#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((x1 == x2 && y1 == y2) || (x1 == x2 && y2 == y3)||(x1 == x2 && y1 == y3)){
        cout<<"NO"<<endl;
    }
    else if ((x2 == x3 && y1 == y2) || (x2 == x3 && y2 == y3)||(x2 == x3 && y1 == y3)){
        cout<<"NO"<<endl;
    }
    else  if ((x1 == x3 && y1 == y2) || (x1 == x3 && y2 == y3)||(x1 == x3 && y1 == y3)){
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES\n";
}

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}