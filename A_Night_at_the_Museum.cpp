#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int ans = 0;

    char first = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        ans += min(abs(first - s[i]), 26 - abs(s[i] - first));
        first = s[i];

    }
    cout << ans << endl;
}