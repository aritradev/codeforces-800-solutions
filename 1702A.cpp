#include<iostream>

#include<string>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    string a;
    cin>>a;
    n=a.size()-1;
    int x=stoi(a);
    int ans = x - pow(10,n);
    cout<<ans<<endl;
}


    return 0;
}