#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
void solve(){
    int n;cin>>n;
    int ara[n+1];
    for(int i =0;i<n;i++){
        cin>>ara[i];
    }
    if(ara[0]==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}


int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}