#include<iostream>
using namespace std;
int main(){
    int  t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=a+(b*2)+1;
        if(a==0){
            cout<<"1"<<endl;
        }
        
        else
        cout<<x<<endl;
    }
}