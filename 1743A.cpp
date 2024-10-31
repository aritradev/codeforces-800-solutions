#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a;
        cin>>n;
        int ara[n];
        for(int i =0 ;i<n;i++){
            cin>>ara[i];
        }
        k=9-n;
        int ans=0;
        for(int j=1;j<=k;j++){
            int x=(j*6);
            ans+=x;
        }
        cout<<ans<<endl;
    }
}