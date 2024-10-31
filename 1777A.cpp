#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        
        cin>>n;
        int ara[n];
        for(int i =0 ; i<n;i++){
            cin>>ara[i];
        }
        int count=0;
        for(int i =0;i<n-1;i++){
            
         if(ara[i]%2==ara[i+1]%2){
            ara[i]*=ara[i+1];
            count++;
           // break;
         }   
        }
        cout<<count<<endl;
    }
}