#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count, n, ans;
        cin >> n;
        count = 0;
        ans = 0;
        char ara[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            count++;
        }
        for (int i = 0; i < n /2; i++)
        {
            

            if ((ara[i] == '0') && (ara[n - i - 1] == '1'))
            {
                count = count - 2;
            }
            else if ((ara[i] == '1') && (ara[n - i - 1] == '0'))
            {
                count = count - 2;
            }
            else
            break;
        }

        cout << count << endl;
    }
}