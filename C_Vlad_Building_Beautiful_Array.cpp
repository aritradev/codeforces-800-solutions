#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    int ara[n];
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }
    sort(ara,ara +n);
    for(int i =0 ;i<n-1;i++){
        if((ara[i]%2)!=(ara[i+1]%2)){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES\n";
    }
    else {
        int minn=ara[0];
        if(minn%2==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    
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