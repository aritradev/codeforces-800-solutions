#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a ,n;
         cin>>n;
        int ara[n];
       
        for(int i = 0; i<n ;i++){
            cin>>ara[i];

        }
        
        
        for(int i = 0; i<n ;i++){
           cout<<n-ara[i]+1<<" ";
        }
        cout<<endl;



    }
}