#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--){
        int n;
        cin>>n;
        if(n>3){
            if(n%3==0){
                cout<<n/3<<endl;
            }
            else
            cout<<1+(n/3)<<endl;
        }
        else if(n==1)
        {
            cout<<"2"<<endl;
        }
        else if (n==2 || n==3){
            cout<<"1"<<endl;
        }
    }

    return 0;
}