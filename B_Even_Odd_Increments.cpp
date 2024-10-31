#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        
        cin >> n >> m;
        int ara[n];
        long long int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            ans+=ara[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            if (x == 1)
            {  
                for (int j = 0; j < n; j++)
                {   

                    if (ara[j] % 2 == 1)
                    {
                        ara[j] += y;
                        ans+=y;
                    }
                   
                }
                cout<<ans<<endl;
            }
            else{
               
                for (int j = 0; j < n; j++)
                {   

                    if (ara[j] % 2 == 0)
                    {
                        ara[j] += y;
                        ans += y;
                    }
                   
                }
                cout<< ans <<endl;
            }

        }
    }
}