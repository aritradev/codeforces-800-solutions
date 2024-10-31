#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c, count = 0;
        x = 1;
        int ans = 0;
        cin >> n >> c;
        int ara[n];
        
        int fre[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        sort(ara, ara + n);
        for(int i=0;i<n;i++){
            x=ara[i];
            fre[x]++;

        }
        for(int i=0;i<n;i++){
           cout<<ara[i]<<"  :  "<<fre[i]<<endl;

        }
    }
}