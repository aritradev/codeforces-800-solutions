#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int ans = 0;
        string x;

        for (int i = 9; i > 0; i--)
        {
            if (s >= i)
            {
                s -= i;
                //cout << i;
                x=(char('0'+i))+x;
            }
        }
        cout <<x<< endl;

        // cout<<s<<endl;
    }

    return 0;
}