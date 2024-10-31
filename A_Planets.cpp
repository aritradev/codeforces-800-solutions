#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c, count;
        x = 1;
        int ans = 0;
        cin >> n >> c;
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        sort(ara, ara + n);
        for (int i = 0; i < n - i; i++)
        {
            count=0;
            for (int j = 0; j < n-1; j++)
            {
                
                if (ara[j] == ara[j + 1])
                {
                    count++;
                }
            }

            if (count >= 1)
                
            {
                x = 1 * c;
                ans += x;
            }
            else if (count < 1)
                ans = n - count;
        }
        cout << ans << endl;
    }
}