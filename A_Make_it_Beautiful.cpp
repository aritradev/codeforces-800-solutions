#include<iostream>
using namespace std ;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];

        }
        swap(ara[0],ara[1]);
        swap(ara[n-1],ara[0]);
        if(ara[0]==ara[1]){
            cout<<"NO\n";
        }
        else{
        cout<<"YES\n";
        for(int i =0 ;i<n;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
        }

    }
}