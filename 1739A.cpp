#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==1 || b == 1){
            cout<<"1 "<<"1"<<endl;
        }
        else if(a>3|| b>3)
        cout<<"1 "<<"1"<<endl;
        else
        cout<<a-1<<" "<<b-1<<endl;
        
    }
}