#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
void solve(){
    int n;cin>>n;
    char ara[n+1];
    char s[n+1];
    for(int i =0;i<n;i++){
        cin>>ara[i];
    }
    for(int i =0;i<n;i++){
        cin>>s[i];
    }
   
    for(int i =0;i<n;i++){
       for(int j =i+1;j<n-i;j++){
        if(ara[i]==ara[j])
        ara[j]=s[i];
       }
       ara[i]=s[i];
    }
    for(int i=0;i<n;i++)
    {if(ara[i]==s[i])
    cout<<"Yes"<<endl;
    else
    cout<<"N0"<<endl;}

    

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