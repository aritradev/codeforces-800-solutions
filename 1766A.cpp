#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int len = n.size();
        int ans;
        len -= 1;
        //cout<<len<<endl;

        ans = ((n[0])-'0') + (9 * len);

       cout << ans << endl;
    }
}