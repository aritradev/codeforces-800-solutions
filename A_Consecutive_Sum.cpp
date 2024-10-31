
#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int ara[n];
    
    for(int i =0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    long long int ans=0;
    if(k>1){
        for(int i=k-1;i<n;i++){
            ans+=ara[i];
        }
        cout<<ans<<endl;
    }
    else
    cout<<ara[0]<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}