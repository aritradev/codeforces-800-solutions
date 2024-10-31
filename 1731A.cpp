#include<iostream>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ara[n+5];
        long long int ans=1;
        for (int i =0 ;i<n;i++){
            cin>>ara[i];
            
        }
        for (int i =0 ;i<n;i++){
            
            ans=ans*ara[i];  
        }
        long long int sum=(ans+(n-1))*2022;
        cout<<sum<<endl;
    }
    return 0;
}